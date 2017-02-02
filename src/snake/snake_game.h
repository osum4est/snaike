//
// Created by osumf on 2/1/2017.
//

#ifndef SNAIKE_SNAKE_GAME_H
#define SNAIKE_SNAKE_GAME_H

#include "snake.h"

class SnakeGame {
    private:
        int width;
        int height;
        Snake snake;
        GameObject apple;

        void moveApple();
        int randomX();
        int randomY();

    public:
        SnakeGame(int width, int height);
        void update(double dt);
};


#endif //SNAIKE_SNAKE_GAME_H
