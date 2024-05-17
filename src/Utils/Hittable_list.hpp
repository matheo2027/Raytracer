/*
** EPITECH PROJECT, 2024
** Hittable_list
** File description:
** Hittable_list
*/

#ifndef HITTABLE_LIST_HPP_
#define HITTABLE_LIST_HPP_

#include "./Hittable.hpp"
#include <memory>
#include <vector>

class HittableList : public Hittable {
public:
    HittableList();
    HittableList(std::shared_ptr<Hittable> object);

    void clear();
    void add(std::shared_ptr<Hittable> object);

    bool hit(const Ray& r, double ray_tmin, double ray_tmax, HitRecord& rec) const override;

private:
    std::vector<std::shared_ptr<Hittable>> objects;
};

#endif /* !HITTABLE_LIST_HPP_ */
