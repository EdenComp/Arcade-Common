/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** GameData.hpp
*/

#ifndef DATA_HPP_
#define DATA_HPP_

#include "Elements.hpp"
#include <vector>

namespace arcade::common {
    struct Data {
        std::vector<Sprite> sprites;
        std::vector<Text> texts;
        std::size_t score;
        std::size_t seconds;
    };
}

#endif