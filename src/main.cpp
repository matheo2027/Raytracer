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
#include <iostream>

Flat_Color ray_color(const Ray& r, const Hittable& world) {
    HitRecord rec;
    if (world.hit(r, 0, infinity, rec)) {
        return 0.5 * (rec.normal + Flat_Color(1, 1, 1));
    }

    Vector3D unit_direction = unit_vector(r.direction());
    auto a = 0.5 * (unit_direction.y() + 1.0);
    return (1.0 - a) * Flat_Color(1.0, 1.0, 1.0) + a * Flat_Color(0.5, 0.7, 1.0);
}

int main() {
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

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    for (int j = 0; j < image_height; j++) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto pixel_center = pixel00_loc + (i * pixel_delta_u) + (j * pixel_delta_v);
            auto ray_direction = pixel_center - camera_center;
            Ray r(camera_center, ray_direction);

            Flat_Color pixel_color = ray_color(r, world);
            Flat_color(std::cout, pixel_color);
        }
    }

    std::clog << "\rDone.                 \n";
    return 0;
}
