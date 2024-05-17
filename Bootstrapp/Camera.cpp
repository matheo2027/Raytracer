/*
** EPITECH PROJECT, 2024
** Camera
** File description:
** Camera
*/

#include "Camera.hpp"

namespace RayTracer {

    // Default constructor
    Camera::Camera() : origin(0.0, 0.0, 0.0), screen(Math::Point3D(0.0, 0.0, 0.0), Math::Vector3D(1.0, 0.0, 0.0), Math::Vector3D(0.0, 1.0, 0.0)) {}

    // Destructor
    Camera::~Camera() {}

    // Copy constructor
    Camera::Camera(const Camera& other) : origin(other.origin), screen(other.screen) {}

    // Assignment operator
    Camera& Camera::operator=(const Camera& other) {
        if (this != &other) {
            origin = other.origin;
            screen = other.screen;
        }
        return *this;
    }

    // Method to generate a ray from camera to a point on the screen
    RayTracer::Ray Camera::ray(double u, double v) const {
        Math::Point3D pointOnScreen = screen.pointAt(u, v);
        return RayTracer::Ray(origin, pointOnScreen - origin);
    }

}
