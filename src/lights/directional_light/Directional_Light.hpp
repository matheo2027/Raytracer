/*
** EPITECH PROJECT, 2024
** Directional_Light
** File description:
** Directional_Light
*/

#ifndef DIRECTIONAL_LIGHT_HPP
#define DIRECTIONAL_LIGHT_HPP

class Directional_Light {
private:
    float intensity; // Intensity of the directional light
    float direction[3]; // Direction vector of the light

public:
    Directional_Light(float intensity, float direction[3]); // Constructor
    ~Directional_Light(); // Destructor

    float getIntensity() const; // Getter for intensity
    const float* getDirection() const; // Getter for direction
    void setIntensity(float intensity); // Setter for intensity
    void setDirection(float direction[3]); // Setter for direction x,y and z
};

#endif // DIRECTIONAL_LIGHT_HPP
