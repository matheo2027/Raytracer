/*
** EPITECH PROJECT, 2024
** Ambiant_Light
** File description:
** Ambiant_light
*/

#ifndef AMBIANT_LIGHT_HPP_
#define AMBIANT_LIGHT_HPP_

class Ambient_Light {
public:
    Ambient_Light(float intensity);
    ~Ambient_Light();

    float getIntensity() const;
    void setIntensity(float intensity);

private:
    float intensity;
};

#endif
