/*
** EPITECH PROJECT, 2024
** Ambiant_Light
** File description:
** Ambiant_Light
*/

#include "Ambiant_Light.hpp"

// Constructor
Ambient_Light::Ambient_Light(float intensity) : intensity(intensity) {}

// Destructor
Ambient_Light::~Ambient_Light() {}

// Getter for intensity
float Ambient_Light::getIntensity() const {
    return intensity;
}

// Setter for intensity
void Ambient_Light::setIntensity(float intensity) {
    this->intensity = intensity;
}
