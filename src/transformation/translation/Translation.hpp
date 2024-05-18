/*
** EPITECH PROJECT, 2024
** Translation
** File description:
** Translation
*/

#ifndef TRANSLATION_HPP_
#define TRANSLATION_HPP_

class Translation {
private:
    float translation[3]; // Translation vector (dx, dy, dz)

public:
    Translation(); // Default constructor
    Translation(float translation[3]); // Constructor
    ~Translation(); // Destructor

    const float* getTranslation() const; // Getter for translation
    void setTranslation(float translation[3]); // Setter for translation
};

#endif
