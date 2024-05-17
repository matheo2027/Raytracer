/*
** EPITECH PROJECT, 2024
** Ray
** File description:
** Ray
*/

#ifndef RAY_HPP_
#define RAY_HPP_

#include "Point3D.hpp"
#include "Vector3D.hpp"

namespace RayTracer {
    class Ray {
    public:
        Math::Point3D origin;
        Math::Vector3D direction;

        // Default constructor
        Ray();

        // Constructor with parameters
        Ray(const Math::Point3D& _origin, const Math::Vector3D& _direction);
    };
}

#endif /* !RAY_HPP_ */
