/*
** EPITECH PROJECT, 2024
** Plane
** File description:
** Plane
*/

#include "Plane.hpp"

Plane::Plane(float position, char axis, const Flat_Color& color) : position(position), axis(axis), color(color) {}

Plane::~Plane() {}

float Plane::getPosition() const {
    return position;
}

char Plane::getAxis() const {
    return axis;
}

const Flat_Color& Plane::getColor() const {
    return color;
}

void Plane::setPosition(float position) {
    this->position = position;
}

void Plane::setAxis(char axis) {
    this->axis = axis;
}

void Plane::setColor(const Flat_Color& color) {
    this->color = color;
}
