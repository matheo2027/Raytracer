/*
** EPITECH PROJECT, 2024
** Renderer
** File description:
** Renderer
*/

#ifndef RENDERER_HPP_
#define RENDERER_HPP_

#include "../../include/Macros.hpp"
#include "../primitives/sphere/Sphere.hpp"
#include "../primitives/plane/Plane.hpp"
#include "../transformation/translation/Translation.hpp"

class Renderer {
private:
    std::vector<Sphere> spheres; // List of spheres in the scene
    std::vector<Plane> planes; // List of planes in the scene
    Translation translation; // Translation object for scene transformation

public:
    Renderer(); // Constructor
    ~Renderer(); // Destructor

    void addSphere(const Sphere& sphere); // Method to add a sphere to the scene
    void addPlane(const Plane& plane); // Method to add a plane to the scene
    void setTranslation(const Translation& translation); // Method to set translation for the scene

};

#endif
