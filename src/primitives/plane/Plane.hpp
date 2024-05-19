/*
** EPITECH PROJECT, 2024
** Plane
** File description:
** Plane
*/

#ifndef PLANE_HPP_
#define PLANE_HPP_

#include "../../materials/flat_color/Flat_Color.hpp"

class Plane {
public:
    Plane(float position, char axis, const Flat_Color& color);
    ~Plane();

    float getPosition() const;
    char getAxis() const;
    const Flat_Color& getColor() const;

    void setPosition(float position);
    void setAxis(char axis);
    void setColor(const Flat_Color& color);

private:
    float position;
    char axis;
    Flat_Color color;
};

#endif
