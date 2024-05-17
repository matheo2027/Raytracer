/*
** EPITECH PROJECT, 2024
** Ray
** File description:
** Ray
*/

#include "Ray.hpp"

namespace RayTracer {
    // Default constructor
    Ray::Ray() : origin(), direction() {}

    // Constructor with parameters
    Ray::Ray(const Math::Point3D& _origin, const Math::Vector3D& _direction)
        : origin(_origin), direction(_direction) {}
}
