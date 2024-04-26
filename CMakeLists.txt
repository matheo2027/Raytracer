cmake_minimum_required(VERSION 3.10)
project(
  Raytracer
  VERSION 0.1
  DESCRIPTION "Raytracer"
  LANGUAGES CXX)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_BUILD_TYPE Debug)  # Set build type to Debug

# Enable AddressSanitizer
# set(CMAKE_CXX_FLAGS
#     "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
# set(CMAKE_EXE_LINKER_FLAGS
#     "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address -fno-omit-frame-pointer")

# Add debug flags
# if(CMAKE_COMPILER_IS_GNUCXX)
#   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb3")
# endif()

# Add subdirectories
add_subdirectory(src/lights/ambiant_light)
add_subdirectory(src/lights/directional_light)
add_subdirectory(src/materials/flat_color)
add_subdirectory(src/primitives/plane)
add_subdirectory(src/primitives/sphere)
add_subdirectory(src/renderers)
add_subdirectory(src/transformation/translation)

# Main executable
add_executable(raytracer src/main.cpp)

# Link libraries
target_link_libraries(raytracer Ambiant_Light Directional_Light Flat_Color Plane Sphere Renderer Translation)

# Set the output directory for the executable to the root of the project
set_target_properties(raytracer PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}
)
