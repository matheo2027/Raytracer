/*
** EPITECH PROJECT, 2024
** Point3D
** File description:
** Point3D
*/

#include "Point3D.hpp"
#include "Vector3D.hpp"

namespace Math {
    // Default constructor
    Point3D::Point3D() : x(0), y(0), z(0) {}

    // Constructor with parameters
    Point3D::Point3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    // Arithmetic operator overloading for adding a vector to a point
    Point3D Point3D::operator+(const Vector3D& v) const {
        return Point3D(x + v.x, y + v.y, z + v.z);
    }
    Vector3D Point3D::operator-(const Point3D& p) const {
        return Vector3D(x - p.x, y - p.y, z - p.z);
    }
    Point3D Point3D::operator*(double scalar) const {
        return Point3D(x * scalar, y * scalar, z * scalar);
    }
}
