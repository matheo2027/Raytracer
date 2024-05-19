/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#include "Sphere.hpp"

Sphere::Sphere() {}

Sphere::Sphere(const Point3D& cen, double r, const Flat_Color& color) : center(cen), radius(r), color(color) {}

const Point3D& Sphere::getCenter() const {
    return center;
}

double Sphere::getRadius() const {
    return radius;
}

const Flat_Color& Sphere::getColor() const {
    return color;
}
