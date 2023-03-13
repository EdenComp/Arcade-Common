/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** Elements.hpp
*/

#ifndef ELEMENTS_HPP_
#define ELEMENTS_HPP_

#include <string>

namespace arcade::common {
    struct Position {
        std::size_t x;
        std::size_t y;
    };

    struct Sprite {
        Position position;
        std::string filepath;
    };

    struct Text {
        Position position;
        std::string text;
        std::size_t size;
    };
}

#endif
