/*
** EPITECH PROJECT, 2024
** Hittable
** File description:
** Hittable
*/

#ifndef HITTABLE_HPP_
#define HITTABLE_HPP_

#include <memory>
#include "Ray.hpp"
#include "Vector3D.hpp"

class Material;

struct HitRecord {
    Point3D p;
    Vector3D normal;
    std::shared_ptr<Material> mat_ptr;
    double t;
    bool front_face;

    inline void set_face_normal(const Ray& r, const Vector3D& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class Hittable {
public:
    virtual bool hit(const Ray& r, double t_min, double t_max, HitRecord& rec) const = 0;
};

#endif /* !HITTABLE_HPP_ */
