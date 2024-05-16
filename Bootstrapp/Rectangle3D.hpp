/*
** EPITECH PROJECT, 2024
** Rectangle3D
** File description:
** Rectangle3D
*/

#ifndef RECTANGLE3D_HPP_
#define RECTANGLE3D_HPP_
#include "Point3D.hpp"
#include "Vector3D.hpp"

namespace RayTracer {
    class Rectangle3D {
    public:
        Math::Point3D origin;
        Math::Vector3D bottom_side;
        Math::Vector3D left_side;

        // Constructor
        Rectangle3D(const Math::Point3D& origin, const Math::Vector3D& bottomSide, const Math::Vector3D& leftSide);
        // Method to get the coordinates of a point in the rectangle
        Math::Point3D pointAt(double u, double v) const;
    };
}

#endif /* !RECTANGLE3D_HPP_ */
