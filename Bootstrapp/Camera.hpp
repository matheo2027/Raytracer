/*
** EPITECH PROJECT, 2024
** Camera
** File description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "Point3D.hpp"
#include "Rectangle3D.hpp"
#include "Ray.hpp"

namespace RayTracer {

    class Camera {
    public:
        // Constructors
        Camera(); // Default constructor

        // Destructor
        ~Camera(); // Destructor

        // Copy constructor
        Camera(const Camera& other); // Copy constructor

        // Assignment operator
        Camera& operator=(const Camera& other); // Assignment operator

        // Methods
        RayTracer::Ray ray(double u, double v) const;

    private:
        Math::Point3D origin;
        RayTracer::Rectangle3D screen;
    };

} // namespace RayTracer

#endif /* !CAMERA_HPP_ */
