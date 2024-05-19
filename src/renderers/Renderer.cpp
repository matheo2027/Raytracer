/*
** EPITECH PROJECT, 2024
** Renderer
** File description:
** Renderer
*/

#include "Renderer.hpp"

Renderer::Renderer() {}

Renderer::~Renderer() {}

void Renderer::addSphere(const Sphere& sphere) {
    spheres.push_back(sphere);
}

void Renderer::addPlane(const Plane& plane) {
    planes.push_back(plane);
}

void Renderer::setTranslation(const Translation& translation) {
    this->translation = translation;
}

const std::vector<Sphere>& Renderer::getSpheres() const {
    return spheres;
}

const std::vector<Plane>& Renderer::getPlanes() const {
    return planes;
}
