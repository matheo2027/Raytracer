/*
** EPITECH PROJECT, 2024
** Sphere.cpp
** File description:
** Sphere
*/

#include "Sphere.hpp"
#include <cmath>

namespace RayTracer {
    // Constructor
    Sphere::Sphere(const Math::Point3D& _center, double _radius)
        : center(_center), radius(_radius) {}

    // Method to check if a ray intersects with the sphere
    bool Sphere::hits(const Ray& ray) const {
        // Calculate parameters for quadratic equation
        Math::Vector3D oc = ray.origin - center;
        double a = ray.direction.dot(ray.direction);
        double b = 2.0 * oc.dot(ray.direction);
        double c = oc.dot(oc) - radius * radius;

        // Calculate discriminant
        double discriminant = b * b - 4 * a * c;

        // If discriminant is non-negative, there is a possible intersection
        if (discriminant >= 0) {
            // Calculate square root of discriminant for solutions
            double sqrt_discriminant = sqrt(discriminant);

            // Calculate solutions of quadratic equation
            double t1 = (-b - sqrt_discriminant) / (2.0 * a);
            double t2 = (-b + sqrt_discriminant) / (2.0 * a);

            // Check if both solutions are real and positive
            if (t1 >= 0 || t2 >= 0) {
                return true; // There is an intersection
            }
        }

        return false; // No intersection
    }

}
