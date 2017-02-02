//
// Created by osumf on 2/1/2017.
//

#ifndef SNAIKE_SNAKE_H
#define SNAIKE_SNAKE_H

#include <GLFW/glfw3.h>
#include "../utils/color.h"
#include "game_object.h"
#include "../utils/direction.h"
#include <vector>

class Snake {
    private:
        GameObject head;
        std::vector<GameObject> body;
        Color color;
        float speed;
        double time;
        int growAmount;
        Direction currentDirection;
        std::vector<Direction> directionQueue;
        bool stopped;

        void move();

    public:
        Snake();
        void update(double dt);
        void setDirection(Direction direction);
        int getX();
        int getY();
        void grow();
        int length();
        std::vector<GameObject> getBody();
        void stop();
};


#endif //SNAIKE_SNAKE_H
