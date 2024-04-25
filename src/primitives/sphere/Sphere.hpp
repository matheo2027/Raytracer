/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../../materials/flat_color/Flat_Color.hpp"

class Sphere {
private:
    float center[3]; // Center of the sphere (x, y, z)
    float radius; // Radius of the sphere
    Flat_Color color; // Color of the sphere

public:
    Sphere(float center[3], float radius, const Flat_Color& color); // Constructor
    ~Sphere(); // Destructor

    const float* getCenter() const; // Getter for center
    float getRadius() const; // Getter for radius
    const Flat_Color& getColor() const; // Getter for color
    void setCenter(float center[3]); // Setter for center
    void setRadius(float radius); // Setter for radius
    void setColor(const Flat_Color& color); // Setter for color
};

#endif // SPHERE_HPP
