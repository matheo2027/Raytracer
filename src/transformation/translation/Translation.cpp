/*
** EPITECH PROJECT, 2024
** Translation
** File description:
** Translation
*/

#include "Translation.hpp"

// Default constructor
Translation::Translation() {
    // Initialize translation vector to zero
    for (int i = 0; i < 3; ++i) {
        translation[i] = 0.0f;
    }
}

// Constructor with parameters
Translation::Translation(float translation[3]) {
    // Set translation vector
    for (int i = 0; i < 3; ++i) {
        this->translation[i] = translation[i];
    }
}

// Destructor
Translation::~Translation() {}

// Getter for translation
const float* Translation::getTranslation() const {
    return translation;
}

// Setter for translation
void Translation::setTranslation(float translation[3]) {
    // Set translation vector
    for (int i = 0; i < 3; ++i) {
        this->translation[i] = translation[i];
    }
}
