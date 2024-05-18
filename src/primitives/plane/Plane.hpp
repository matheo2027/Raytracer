/*
** EPITECH PROJECT, 2024
** Plane
** File description:
** Plane
*/

#ifndef PLANE_HPP_
#define PLANE_HPP_

#include "../../materials/flat_color/Flat_Color.hpp"

class Plane {
private:
    float position; // Position of the plane along its axis
    char axis; // Axis along which the plane is positioned ('X', 'Y', or 'Z')
    Flat_Color color; // Color of the plane

public:
    Plane(float position, char axis, const Flat_Color& color); // Constructor
    ~Plane(); // Destructor

    float getPosition() const; // Getter for position
    char getAxis() const; // Getter for axis
    const Flat_Color& getColor() const; // Getter for color
    void setPosition(float position); // Setter for position
    void setAxis(char axis); // Setter for axis
    void setColor(const Flat_Color& color); // Setter for color
};

#endif
