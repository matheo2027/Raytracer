/*
** EPITECH PROJECT, 2024
** Ray
** File description:
** Ray
*/

#ifndef RAY_HPP_
#define RAY_HPP_

#include "Vector3D.hpp"

class Ray {
public:
    Ray();
    Ray(const Point3D& origin, const Vector3D& direction);

    const Point3D& origin() const;
    const Vector3D& direction() const;
    Point3D at(double t) const;

private:
    Point3D orig;
    Vector3D dir;
};

#endif /* !RAY_HPP_ */
