/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IGameModule.hpp
*/

#ifndef IGAMEMODULE_HPP_
#define IGAMEMODULE_HPP_

#include "common/Input.hpp"

namespace common {
    class IGameModule {
        virtual ~IGameModule() = default;

        virtual void handleInput(common::Input in) = 0;
        virtual void tick(int tick) = 0;
    };
}

#endif
