//
// Created by osumf on 2/1/2017.
//

#ifndef SNAIKE_GAME_OBJECT_H
#define SNAIKE_GAME_OBJECT_H


#include "../utils/color.h"

class GameObject {

    public:
        GameObject();
        GameObject(int x, int y, int size, Color color);

        int x;
        int y;
        int size;
        Color color;

        void draw();
};


#endif //SNAIKE_GAME_OBJECT_H
