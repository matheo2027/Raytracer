/*
** EPITECH PROJECT, 2024
** Directional_Light
** File description:
** Directional_Light
*/

#include "Directional_Light.hpp"

Directional_Light::Directional_Light(float intensity, const float direction[3]) : intensity(intensity) {
    setDirection(direction);
}

Directional_Light::~Directional_Light() {}

float Directional_Light::getIntensity() const {
    return intensity;
}

const float* Directional_Light::getDirection() const {
    return direction;
}

void Directional_Light::setIntensity(float intensity) {
    this->intensity = intensity;
}

void Directional_Light::setDirection(const float direction[3]) {
    for (int i = 0; i < 3; ++i) {
        this->direction[i] = direction[i];
    }
}

