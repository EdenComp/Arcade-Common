/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IGameModule.hpp
*/

#ifndef IGAMEMODULE_HPP_
#define IGAMEMODULE_HPP_

#include "Data.hpp"
#include "Input.hpp"

namespace arcade::common {
    class IGameModule {
            virtual ~IGameModule() = default;

            virtual Data &handleInput(common::Input in) = 0;
            virtual void tick(int tick) = 0;
    };
}

#endif
