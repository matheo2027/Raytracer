/*
** EPITECH PROJECT, 2024
** Point3D
** File description:
** Point3D
*/

#ifndef POINT3D_HPP_
#define POINT3D_HPP_

#include "Vector3D.hpp"

namespace Math {
    class Point3D {
    public:
        double x, y, z;

        // Default constructor
        Point3D();

        // Constructor with parameters
        Point3D(double _x, double _y, double _z);

        // Arithmetic operators overloading
        Point3D operator+(const Vector3D& v) const;
        Vector3D operator-(const Point3D& p) const;
        Point3D operator*(double scalar) const;
    };
}


#endif /* !POINT3D_HPP_ */
