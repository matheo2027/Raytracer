/*
** EPITECH PROJECT, 2024
** Ambiant_Light
** File description:
** Ambiant_light
*/

#ifndef AMBIANT_LIGHT_HPP
#define AMBIANT_LIGHT_HPP

class Ambient_Light {
private:
    float intensity; // Intensity of the ambient light

public:
    Ambient_Light(float intensity); // Constructor
    ~Ambient_Light(); // Destructor

    float getIntensity() const; // Getter for intensity

    void setIntensity(float intensity); // Setter for intensity
};

#endif // AMBIANT_LIGHT_HPP
