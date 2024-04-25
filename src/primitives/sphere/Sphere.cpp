/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#include "Sphere.hpp"

// Constructor
Sphere::Sphere(float center[3], float radius, const Flat_Color& color)
    : radius(radius), color(color) {
    for (int i = 0; i < 3; ++i) {
        this->center[i] = center[i];
    }
}

// Destructor
Sphere::~Sphere() {}

// Getter for center
const float* Sphere::getCenter() const {
    return center;
}

// Getter for radius
float Sphere::getRadius() const {
    return radius;
}

// Getter for color
const Flat_Color& Sphere::getColor() const {
    return color;
}


// Setter for center
void Sphere::setCenter(float center[3]) {
    for (int i = 0; i < 3; ++i) {
        this->center[i] = center[i];
    }
}

// Setter for radius
void Sphere::setRadius(float radius) {
    this->radius = radius;
}

// Setter for color
void Sphere::setColor(const Flat_Color& color) {
    this->color = color;
}
