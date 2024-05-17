/*
** EPITECH PROJECT, 2024
** Flat_Color
** File description:
** Flat_Color
*/

#include "./Flat_Color.hpp"

void Flat_color(std::ostream& out, const Flat_Color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    int rbyte = static_cast<int>(255.999 * r);
    int gbyte = static_cast<int>(255.999 * g);
    int bbyte = static_cast<int>(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}
