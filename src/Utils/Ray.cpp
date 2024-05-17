/*
** EPITECH PROJECT, 2024
** Ray
** File description:
** Ray
*/

#include "./Ray.hpp"

Ray::Ray() {}

Ray::Ray(const Point3D& origin, const Vector3D& direction)
    : orig(origin), dir(direction) {}

const Point3D& Ray::origin() const {
    return orig;
}

const Vector3D& Ray::direction() const {
    return dir;
}

Point3D Ray::at(double t) const {
    return orig + t * dir;
}
