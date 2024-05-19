/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

#include "../../materials/flat_color/Flat_Color.hpp"
#include "../../Utils/Hittable.hpp"

class Sphere {
public:
    Sphere();
    Sphere(const Point3D& cen, double r, const Flat_Color& color);

    const Point3D& getCenter() const;
    double getRadius() const;
    const Flat_Color& getColor() const;

private:
    Point3D center;
    double radius;
    Flat_Color color;
};

#endif
