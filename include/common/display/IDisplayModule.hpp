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

            virtual void display(const Data &data) = 0;
            virtual Input getInput() = 0;
    };
}

#endif
