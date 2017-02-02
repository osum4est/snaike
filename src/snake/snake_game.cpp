//
// Created by osumf on 2/1/2017.
//

#include <iostream>
#include "snake_game.h"
#include "../utils/input.h"
#include "../utils/utils.h"

SnakeGame::SnakeGame(int width, int height) {
    this->width = width;
    this->height = height;
    apple.color = Color::RED;
    moveApple();
}

void SnakeGame::update(double dt) {
    // Eat apple
    if (apple.x == snake.getX() && apple.y == snake.getY()) {
        snake.grow();
        moveApple();
    }

    // Check for collision
    for (int i = 0; i < snake.length(); i++) {
        if (snake.getX() == snake.getBody()[i].x &&
                snake.getY() == snake.getBody()[i].y)
            snake.stop();
    }
    if (snake.getX() < 0 ||
        snake.getX() * 20 >= width ||
        snake.getY() < 0 ||
        snake.getY() * 20 >= height)
        snake.stop();

    // Check for input
    int key = Input::getPressedKey();
    if (key == GLFW_KEY_UP)
        snake.setDirection(Direction::up);
    else if (key == GLFW_KEY_DOWN)
        snake.setDirection(Direction::down);
    else if (key == GLFW_KEY_LEFT)
        snake.setDirection(Direction::left);
    else if (key == GLFW_KEY_RIGHT)
        snake.setDirection(Direction::right);

    snake.update(dt);
    apple.draw();
}

void SnakeGame::moveApple() {
    apple.x = randomX();
    apple.y = randomY();
}

int SnakeGame::randomX() {
    return Utils::randomBetween(0, width - apple.size) / apple.size;
}

int SnakeGame::randomY() {
    return Utils::randomBetween(0, height - apple.size) / apple.size;
}
