/*
** EPITECH PROJECT, 2024
** Translation
** File description:
** Translation
*/

#ifndef TRANSLATION_HPP
#define TRANSLATION_HPP

class Translation {
public:
    // Default constructor
    Translation();

    // Constructor with parameters
    Translation(const float translation[3]);

    // Destructor
    ~Translation();

    // Getter for translation
    const float* getTranslation() const;

    // Setter for translation
    void setTranslation(const float translation[3]);

private:
    float translation[3];
};

#endif // TRANSLATION_HPP
