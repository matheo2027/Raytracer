/*
** EPITECH PROJECT, 2024
** Rectangle3D
** File description:
** Rectangle3D
*/

#include "Rectangle3D.hpp"

namespace RayTracer {
    // Constructor
    Rectangle3D::Rectangle3D(const Math::Point3D& _origin, const Math::Vector3D& _bottom_side, const Math::Vector3D& _left_side)
        : origin(_origin), bottom_side(_bottom_side), left_side(_left_side) {}

    // Method to get the coordinates of a point in the rectangle
    Math::Point3D Rectangle3D::pointAt(double u, double v) const {
        // Modifier les types des variables bottom_right et top_left pour qu'ils soient des points
        Math::Point3D bottom_right = origin + bottom_side;
        Math::Point3D top_left = origin + left_side;

        // Calculer les points bottom_interpolated et top_interpolated en ajoutant un vecteur pondéré à l'origine
        Math::Point3D bottom_interpolated = origin + (bottom_side * u);
        Math::Point3D top_interpolated = origin + (left_side * v);

        // Calculer le point final en ajoutant un vecteur pondéré à bottom_interpolated
        Math::Point3D final_point = bottom_interpolated + (top_interpolated - bottom_interpolated) * v;

        return final_point;
    }
}
