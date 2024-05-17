/*
** EPITECH PROJECT, 2024
** Screen
** File description:
** Screen
*/

#ifndef SCREEN_HPP_
#define SCREEN_HPP_

namespace RayTracer {
    class Screen {
    public:
        int width;
        int height;

        // Constructor
        Screen(int _width, int _height) : width(_width), height(_height) {}
    };
}

#endif /* !SCREEN_HPP_ */
