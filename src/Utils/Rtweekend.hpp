/*
** EPITECH PROJECT, 2024
** Rtweekend
** File description:
** Rtweekend
*/

#ifndef RTWEEKEND_HPP_
#define RTWEEKEND_HPP_

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>
#include "../materials/flat_color/Flat_Color.hpp"
#include "./Ray.hpp"
#include "./Vector3D.hpp"

using std::make_shared;
using std::shared_ptr;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

double degrees_to_radians(double degrees);

#endif /* !RTWEEKEND_HPP_ */
