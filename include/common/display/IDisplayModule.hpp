/*
** EPITECH PROJECT, 2023
** Arcade-Common
** File description:
** IDisplayModule.hpp
*/

#ifndef IDISPLAYMODULE_HPP_
#define IDISPLAYMODULE_HPP_

#include "Data.hpp"

namespace arcade::common {
    class IDisplayModule {
        public:
            virtual ~IDisplayModule() = default;

            virtual void draw(const Data &data) = 0;
    };
}

#endif
