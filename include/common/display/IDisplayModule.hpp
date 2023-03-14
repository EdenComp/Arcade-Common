/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IDisplayModule.hpp
*/

#ifndef IDISPLAYMODULE_HPP_
#define IDISPLAYMODULE_HPP_

#include "Data.hpp"
#include "Elements.hpp"

namespace arcade::common {
    class IDisplayModule {
        public:
            virtual IDisplayModule() = default;
            virtual ~IDisplayModule() = default;
            virtual void draw(const &GameData) = 0;
    };
}

#endif
