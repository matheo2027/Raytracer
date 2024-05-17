/*
** EPITECH PROJECT, 2024
** Vector3D
** File description:
** Vector3D
*/

#include "Vector3D.hpp"
#include <cmath>

namespace Math {
    // Default constructor
    Vector3D::Vector3D() : x(0), y(0), z(0) {}

    // Constructor with parameters
    Vector3D::Vector3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    // Length method
    double Vector3D::length() const {
        return sqrt(x * x + y * y + z * z);
    }

    // Arithmetic operators overloading
    Vector3D& Vector3D::operator+=(const Vector3D& v) {
        x += v.x;
        y += v.y;
        z += v.z;
        return *this;
    }

    Vector3D Vector3D::operator+(const Vector3D& v) const {
        return Vector3D(x + v.x, y + v.y, z + v.z);
    }

    Vector3D& Vector3D::operator-=(const Vector3D& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return *this;
    }

    Vector3D Vector3D::operator-(const Vector3D& v) const {
        return Vector3D(x - v.x, y - v.y, z - v.z);
    }

    Vector3D& Vector3D::operator*=(double scalar) {
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }

    Vector3D Vector3D::operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    Vector3D& Vector3D::operator/=(double scalar) {
        x /= scalar;
        y /= scalar;
        z /= scalar;
        return *this;
    }

    Vector3D Vector3D::operator/(double scalar) const {
        return Vector3D(x / scalar, y / scalar, z / scalar);
    }

    // Dot product method
    double Vector3D::dot(const Vector3D& v) const {
        return x * v.x + y * v.y + z * v.z;
    }
}
