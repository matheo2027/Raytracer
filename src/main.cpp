/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "Utils/Rtweekend.hpp"
#include "materials/flat_color/Flat_Color.hpp"
#include "Utils/Ray.hpp"
#include "Utils/Hittable.hpp"
#include "Utils/Hittable_list.hpp"
#include "primitives/sphere/Sphere.hpp"
#include "renderers/Renderer.hpp"
#include "../include/Macros.hpp"
#include "Utils/Vector3D.hpp"

/*Flat_Color ray_color(const Ray& r, const Hittable& world) {
    HitRecord rec;
    if (world.hit(r, 0, infinity, rec)) {
        return 0.5 * (rec.normal + Flat_Color(1, 1, 1));
    }

    Vector3D unit_direction = unit_vector(r.direction());
    auto a = 0.5 * (unit_direction.y() + 1.0);
    return (1.0 - a) * Flat_Color(1.0, 1.0, 1.0) + a * Flat_Color(0.5, 0.7, 1.0);
}

int parsing_file(char *file) {
    auto aspect_ratio = 16.0 / 9.0;
    int image_width = 400;
    int image_height = static_cast<int>(image_width / aspect_ratio);

    HittableList world;
    world.add(make_shared<Sphere>(Point3D(0, 0, -1), 0.5));
    world.add(make_shared<Sphere>(Point3D(0, -100.5, -1), 100));

    auto focal_length = 1.0;
    auto viewport_height = 2.0;
    auto viewport_width = viewport_height * aspect_ratio;
    auto camera_center = Point3D(0, 0, 0);

    auto viewport_u = Vector3D(viewport_width, 0, 0);
    auto viewport_v = Vector3D(0, -viewport_height, 0);

    auto pixel_delta_u = viewport_u / image_width;
    auto pixel_delta_v = viewport_v / image_height;

    auto viewport_upper_left = camera_center
        - Vector3D(0, 0, focal_length) - viewport_u / 2 - viewport_v / 2;
    auto pixel00_loc = viewport_upper_left + 0.5 * (pixel_delta_u + pixel_delta_v);

    std::ofstream out_file("output.ppm");

    if (!out_file) {
        std::cerr << "Could not open the file for writing: output.ppm" << std::endl;
        return KO;
    }

    out_file << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    for (int j = 0; j < image_height; j++) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto pixel_center = pixel00_loc + (i * pixel_delta_u) + (j * pixel_delta_v);
            auto ray_direction = pixel_center - camera_center;
            Ray r(camera_center, ray_direction);

            Flat_Color pixel_color = ray_color(r, world);
            Flat_color(out_file, pixel_color);
        }
    }

    out_file.close();
    std::clog << "\rDone.                 \n";
    return OK;
}

void help(void)
{
  std::cout << "USAGE :" << std::endl;
  std::cout << "\t./raytracer <SCENE_FILE>" << std::endl;
  std::cout << "SCENE_FILE :" << std::endl;
  std::cout << "\t scene configuration" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2 || strcmp(argv[1], "--help") == 0) {
        if (argc != 2 || strcmp(argv[1], "--help") == 0) {
            help();
            return KO;
        }
        return OK;
    }

    const char *filename = argv[1];
    const char *extension = std::strrchr(filename, '.');

    if (!extension || std::strcmp(extension, ".cfg") != 0) {
        std::cerr << "Error: File must have a .cfg extension." << std::endl;
        return KO;
    }

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return KO;
    }

    std::cout << "File opened successfully." << std::endl;
    file.close();
    parsing_file(argv[1]);
    return OK;
}*/



/*************************************************************************************************************************************/




#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
// #include "Ambient_Light.hpp"
// #include "Directional_Light.hpp"
// #include "Flat_Color.hpp"
// #include "Plane.hpp"
// #include "Sphere.hpp"
// #include "Renderer.hpp"
// #include "Translation.hpp"

// Function prototypes
void parseCameraConfig(std::istringstream& stream, Renderer& renderer);
void parsePrimitivesConfig(std::istringstream& stream, Renderer& renderer);
void parseLightsConfig(std::istringstream& stream, Renderer& renderer);
Flat_Color parseColor(std::istringstream& stream);
std::string readToken(std::istringstream& stream);

// Main function to parse the config file
void parseConfigFile(const std::string& filename, Renderer& renderer) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream lineStream(line);
        std::string token = readToken(lineStream);

        if (token == "camera") {
            parseCameraConfig(lineStream, renderer);
        } else if (token == "primitives") {
            parsePrimitivesConfig(lineStream, renderer);
        } else if (token == "lights") {
            parseLightsConfig(lineStream, renderer);
        }
    }
}

void parseCameraConfig(std::istringstream& stream, Renderer& renderer) {
    std::string token;
    std::cout << "Camera Configuration:" << std::endl;
    while (stream >> token) {
        if (token == "resolution") {
            float width, height;
            stream >> token >> width >> token >> height;
            std::cout << "  Resolution: " << width << "x" << height << std::endl;
        } else if (token == "position") {
            float x, y, z;
            stream >> token >> x >> token >> y >> token >> z;
            std::cout << "  Position: (" << x << ", " << y << ", " << z << ")" << std::endl;
        } else if (token == "rotation") {
            float x, y, z;
            stream >> token >> x >> token >> y >> token >> z;
            std::cout << "  Rotation: (" << x << ", " << y << ", " << z << ")" << std::endl;
        } else if (token == "fieldOfView") {
            float fov;
            stream >> fov;
            std::cout << "  Field of View: " << fov << std::endl;
        }
    }
}

void parsePrimitivesConfig(std::istringstream& stream, Renderer& renderer) {
    std::string token;
    std::cout << "Primitives Configuration:" << std::endl;
    while (stream >> token) {
        if (token == "spheres") {
            std::string subToken;
            while (stream >> subToken && subToken != ")") {
                if (subToken == "{") {
                    float x, y, z, r;
                    int rColor, gColor, bColor;
                    stream >> token >> x >> token >> y >> token >> z;
                    stream >> token >> r;
                    stream >> token >> token >> rColor >> token >> gColor >> token >> bColor >> token;
                    Flat_Color color(rColor, gColor, bColor);
                    Sphere sphere(Point3D(x, y, z), r, color);
                    renderer.addSphere(sphere);
                    std::cout << "  Sphere - Position: (" << x << ", " << y << ", " << z << "), Radius: " << r
                              << ", Color: (" << rColor << ", " << gColor << ", " << bColor << ")" << std::endl;
                }
            }
        } else if (token == "planes") {
            std::string subToken;
            while (stream >> subToken && subToken != ")") {
                if (subToken == "{") {
                    std::string axis;
                    float position;
                    int rColor, gColor, bColor;
                    stream >> token >> axis;
                    stream >> token >> position;
                    stream >> token >> token >> rColor >> token >> gColor >> token >> bColor >> token;
                    Flat_Color color(rColor, gColor, bColor);
                    Plane plane(position, axis[0], color);
                    renderer.addPlane(plane);
                    std::cout << "  Plane - Axis: " << axis << ", Position: " << position
                              << ", Color: (" << rColor << ", " << gColor << ", " << bColor << ")" << std::endl;
                }
            }
        }
    }
}

void parseLightsConfig(std::istringstream& stream, Renderer& renderer) {
    std::string token;
    std::cout << "Lights Configuration:" << std::endl;
    while (stream >> token) {
            std::cout << token << std::endl;
        if (token == "ambient") {
            float intensity;
            stream >> intensity;
            std::cout << "  Ambient Light - Intensity: " << intensity << std::endl;
        } else if (token == "diffuse") {
            float intensity;
            stream >> intensity;
            std::cout << "  Diffuse Light - Intensity: " << intensity << std::endl;
        } else if (token == "point") {
            std::cout << "OUI" << " " << std::endl;
            std::string subToken;
            while (stream >> subToken && subToken != ")") {
                if (subToken == "{") {
                    float x, y, z;
                    stream >> token >> x >> token >> y >> token >> z;
                    std::cout << "  Point Light - Position: (" << x << ", " << y << ", " << z << ")" << std::endl;
                }
            }
        } else if (token == "directional") {
            std::string subToken;
            while (stream >> subToken && subToken != ")") {
                if (subToken == "{") {
                    float x, y, z;
                    stream >> token >> x >> token >> y >> token >> z;
                    float direction[] = {x, y, z};
                    std::cout << "  Directional Light - Direction: (" << x << ", " << y << ", " << z << ")" << std::endl;
                }
            }
        }
    }
}

Flat_Color parseColor(std::istringstream& stream) {
    int r, g, b;
    std::string token;
    stream >> token >> r >> token >> g >> token >> b;
    return Flat_Color(r, g, b);
}

std::string readToken(std::istringstream& stream) {
    std::string token;
    stream >> token;
    return token;
}

int main() {
    Renderer renderer;
    parseConfigFile("config/Exemple1.cfg", renderer);

    std::cout << "Camera Configuration:" << std::endl;
    // Output parsed camera configuration
    // Example: Print camera resolution

    std::cout << "Primitives Configuration:" << std::endl;
    // Output parsed primitives configuration
    std::cout << "Parsed Spheres:" << std::endl;
    for (const auto& sphere : renderer.getSpheres()) {
        std::cout << "Sphere Position: (" << sphere.getCenter().x() << ", " << sphere.getCenter().y() << ", " << sphere.getCenter().z()
                  << "), Radius: " << sphere.getRadius() << ", Color: (" << sphere.getColor()[0] << ", " << sphere.getColor()[1] << ", " << sphere.getColor()[2] << ")" << std::endl;
    }

    std::cout << "Parsed Planes:" << std::endl;
    for (const auto& plane : renderer.getPlanes()) {
        std::cout << "Plane Axis: " << plane.getAxis() << ", Position: " << plane.getPosition() << ", Color: ("
                  << plane.getColor()[0] << ", " << plane.getColor()[1] << ", " << plane.getColor()[2] << ")" << std::endl;
    }

    std::cout << "Lights Configuration:" << std::endl;
    // Output parsed lights configuration
    // Example: Print parsed lights

    return 0;
}
