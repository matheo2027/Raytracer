/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../../materials/flat_color/Flat_Color.hpp"
#include "../../Utils/Hittable.hpp"

class Sphere : public Hittable {
public:
    Sphere() {}
    Sphere(const Point3D& cen, double r) : center(cen), radius(r) {}

    bool hit(const Ray& r, double t_min, double t_max, HitRecord& rec) const override;

private:
    Point3D center;
    double radius;
};

#endif // SPHERE_HPP
