/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IDisplayModule.hpp
*/

#ifndef IDISPLAYMODULE_HPP_
#define IDISPLAYMODULE_HPP_

#include "common/Elements.hpp"

namespace common {
    class IDisplayModule {
        virtual ~IDisplayModule() = default;

        virtual void openWindow() = 0;
        virtual void closeWindow() = 0;
        virtual void clearWindow() = 0;

        virtual void drawSprite(const Sprite &sprite);
        virtual void drawText(const Text &text);
    };
}

#endif
