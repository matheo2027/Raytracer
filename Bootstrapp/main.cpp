/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <iostream>
#include "Camera.hpp"
#include "Sphere.hpp"
#include "ImageUtils.hpp"
#include "Point3D.hpp"

int main() {
    // Define camera
    RayTracer::Camera cam;

    // Define sphere
    RayTracer::Sphere s(Math::Point3D(0, 0, -1), 0.5);

    // Define image dimensions
    int image_width = 400;
    int image_height = 200;

    // Write ppm image header
    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    // Loop through each pixel
    for (int j = image_height - 1; j >= 0; --j) {
        for (int i = 0; i < image_width; ++i) {
            // Calculate ray for this pixel
            double u = double(i) / (image_width - 1);
            double v = double(j) / (image_height - 1);
            RayTracer::Ray r = cam.ray(u, v);

            // Check if ray hits the sphere
            if (s.hits(r)) {
                // Write red color for hits
                RayTracer::write_color(Math::Vector3D(1.0, 0.0, 0.0));
            } else {
                // Write blue color for misses
                RayTracer::write_color(Math::Vector3D(0.0, 0.0, 1.0));
            }
        }
    }

    return 0;
}
