/*
** EPITECH PROJECT, 2024
** Directional_Light
** File description:
** Directional_Light
*/

#include "Directional_Light.hpp"

// Constructor
Directional_Light::Directional_Light(float intensity, float direction[3]) : intensity(intensity) {
    for (int i = 0; i < 3; ++i) {
        this->direction[i] = direction[i];
    }
}

// Destructor
Directional_Light::~Directional_Light() {}

// Getter for intensity
float Directional_Light::getIntensity() const {
    return intensity;
}

// Getter for direction
const float* Directional_Light::getDirection() const {
    return direction;
}

// Setter for intensity
void Directional_Light::setIntensity(float intensity) {
    this->intensity = intensity;
}

// Setter for direction
void Directional_Light::setDirection(float direction[3]) {
    for (int i = 0; i < 3; ++i) {
        this->direction[i] = direction[i];
    }
}
