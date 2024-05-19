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
public:
    Renderer();
    ~Renderer();

    void addSphere(const Sphere& sphere);
    void addPlane(const Plane& plane);
    void setTranslation(const Translation& translation);

    const std::vector<Sphere>& getSpheres() const;
    const std::vector<Plane>& getPlanes() const;

private:
    std::vector<Sphere> spheres;
    std::vector<Plane> planes;
    Translation translation;
};

#endif
