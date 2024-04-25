/*
** EPITECH PROJECT, 2024
** Renderer
** File description:
** Renderer
*/

#include "Renderer.hpp"

// Constructor
Renderer::Renderer() {}

// Destructor
Renderer::~Renderer() {}

// Method to add a sphere to the scene
void Renderer::addSphere(const Sphere& sphere) {
    spheres.push_back(sphere);
}

// Method to add a plane to the scene
void Renderer::addPlane(const Plane& plane) {
    planes.push_back(plane);
}

// Method to set translation for the scene
void Renderer::setTranslation(const Translation& translation) {
    this->translation = translation;
}
