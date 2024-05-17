/*
** EPITECH PROJECT, 2024
** Plane
** File description:
** Plane
*/

#include "Plane.hpp"

// Constructor
Plane::Plane(float position, char axis, const Flat_Color& color)
    : position(position), axis(axis), color(color) {}

// Destructor
Plane::~Plane() {}

// Getter for position
float Plane::getPosition() const {
    return position;
}

// Getter for axis
char Plane::getAxis() const {
    return axis;
}

// Getter for color
const Flat_Color& Plane::getColor() const {
    return color;
}

// Setter for position
void Plane::setPosition(float position) {
    this->position = position;
}

// Setter for axis
void Plane::setAxis(char axis) {
    this->axis = axis;
}

// Setter for color
void Plane::setColor(const Flat_Color& color) {
    this->color = color;
}
