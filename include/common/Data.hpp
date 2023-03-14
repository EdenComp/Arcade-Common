/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** GameData.hpp
*/

#ifndef GAMEDATA_HPP_
#define GAMEDATA_HPP_

#include "Elements.hpp"
#include <vector>

namespace arcade::common {
    struct Data {
        std::vector <Sprite> sprites;
        std::vector <Text> texts;
        std::size_t score;
        std::size_t seconds;
    };

    enum class EndEvent {
        NONE,
        MENU,
        EXIT
    };

    class GameData : public Data {
        public:
            EndEvent endEvent;
    };
}

#endif
