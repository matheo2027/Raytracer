/*
** EPITECH PROJECT, 2024
** Directional_Light
** File description:
** Directional_Light
*/

#ifndef DIRECTIONAL_LIGHT_HPP_
#define DIRECTIONAL_LIGHT_HPP_

class Directional_Light {
public:
    Directional_Light(float intensity, const float direction[3]);
    ~Directional_Light();

    float getIntensity() const;
    const float* getDirection() const;
    void setIntensity(float intensity);
    void setDirection(const float direction[3]);

private:
    float intensity;
    float direction[3];
};


#endif
