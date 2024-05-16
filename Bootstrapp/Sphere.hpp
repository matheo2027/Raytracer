/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

#include "Point3D.hpp"
#include "Ray.hpp"

namespace RayTracer {
    class Sphere {
    public:
        Math::Point3D center;
        double radius;

        // Constructor
        Sphere(const Math::Point3D& _center, double _radius);

        // Method to check if a ray intersects with the sphere
        bool hits(const Ray& ray) const;
    };
}

#endif /* !SPHERE_HPP_ */
