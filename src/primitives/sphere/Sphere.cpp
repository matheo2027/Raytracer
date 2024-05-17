/*
** EPITECH PROJECT, 2024
** Sphere
** File description:
** Sphere
*/

#include "./Sphere.hpp"

bool Sphere::hit(const Ray& r, double t_min, double t_max, HitRecord& rec) const {
    Vector3D oc = r.origin() - center;
    auto a = r.direction().length_squared();
    auto half_b = dot(oc, r.direction());
    auto c = oc.length_squared() - radius * radius;
    auto discriminant = half_b * half_b - a * c;

    if (discriminant < 0) return false;

    auto sqrtd = sqrt(discriminant);

    // Find the nearest root that lies in the acceptable range.
    auto root = (-half_b - sqrtd) / a;
    if (root < t_min || t_max < root) {
        root = (-half_b + sqrtd) / a;
        if (root < t_min || t_max < root)
            return false;
    }

    rec.t = root;
    rec.p = r.at(rec.t);
    Vector3D outward_normal = (rec.p - center) / radius;
    rec.set_face_normal(r, outward_normal);
    rec.mat_ptr = nullptr; // Set material pointer to null, as it's not used for spheres.

    return true;
}