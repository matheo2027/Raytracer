/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "../include/Macros.hpp"
#include <iostream>
#include <unistd.h>
#include <string.h>

void help(void)
{
  std::cout << "USAGE :" << std::endl;
  std::cout << "\t./raytracer <SCENE_FILE>" << std::endl;
  std::cout << "SCENE_FILE :" << std::endl;
  std::cout << "\t scene configuration" << std::endl;
}

int main(int argc, char **argv)
{
  if (argc != 2 || strcmp(argv[1], "--help") == 0) {
    help();
    return KO;
  }
  return OK;
}
