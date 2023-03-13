/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IDisplayModule.hpp
*/

#ifndef IDISPLAYMODULE_HPP_
#define IDISPLAYMODULE_HPP_

#include "Elements.hpp"

namespace arcade::common {
    class IDisplayModule {
        virtual ~IDisplayModule() = default;

        virtual void openWindow() = 0;
        virtual void closeWindow() = 0;
        virtual void clearWindow() = 0;

        virtual void drawSprite(const Sprite &sprite) = 0;
        virtual void drawText(const Text &text) = 0;
    };
}

#endif
