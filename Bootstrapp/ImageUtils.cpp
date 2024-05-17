/*
** EPITECH PROJECT, 2024
** ImageUtils
** File description:
** ImageUtils
*/

#include <iostream>
#include "ImageUtils.hpp"

namespace RayTracer {

    void write_color(const Math::Vector3D& color) {
        // Convert color components from [0,1] to [0,255] and output as integers
        int ir = static_cast<int>(255.999 * color.x);
        int ig = static_cast<int>(255.999 * color.y);
        int ib = static_cast<int>(255.999 * color.z);

        // Output color as integers separated by spaces
        std::cout << ir << " " << ig << " " << ib << "\n";
    }

}
