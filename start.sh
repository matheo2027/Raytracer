#!/bin/bash

rm -rf build
rm -rf lib/*.so
rm -rf lib/*.a
rm -rf raytracer

cmake -S . -B build
cmake --build build -- -j $(nproc --all)