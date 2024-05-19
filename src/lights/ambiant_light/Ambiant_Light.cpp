/*
** EPITECH PROJECT, 2024
** Ambiant_Light
** File description:
** Ambiant_Light
*/

#include "Ambiant_Light.hpp"

Ambient_Light::Ambient_Light(float intensity) : intensity(intensity) {}

Ambient_Light::~Ambient_Light() {}

float Ambient_Light::getIntensity() const {
    return intensity;
}

void Ambient_Light::setIntensity(float intensity) {
    this->intensity = intensity;
}
