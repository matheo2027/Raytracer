/*
** EPITECH PROJECT, 2024
** vector3D
** File description:
** Vector3D
*/

#ifndef VECTOR3D_HPP_
#define VECTOR3D_HPP_

namespace Math {
    class Vector3D {
    public:
        double x, y, z;

        // Default constructor
        Vector3D();

        // Constructor with parameters
        Vector3D(double _x, double _y, double _z);

        // Length method
        double length() const;

        // Arithmetic operators overloading
        Vector3D& operator+=(const Vector3D& v);
        Vector3D operator+(const Vector3D& v) const;
        Vector3D& operator-=(const Vector3D& v);
        Vector3D operator-(const Vector3D& v) const;
        Vector3D& operator*=(double scalar);
        Vector3D operator*(double scalar) const;
        Vector3D& operator/=(double scalar);
        Vector3D operator/(double scalar) const;

        // Dot product method
        double dot(const Vector3D& v) const;
    };
}

#endif /* !VECTOR3D_HPP_ */
