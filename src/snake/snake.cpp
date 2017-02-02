//
// Created by osumf on 2/1/2017.
//

#include <iostream>
#include "snake.h"

Snake::Snake() {
    speed = .1;
    time = 0;
    growAmount = 5;
    currentDirection = Direction::right;
    stopped = false;

    head.x = 6;
    head.y = 3;
    head.color = Color::BLUE;

    for (int i = 0; i < 5; i++) {
        body.push_back(GameObject(head.x - (i+1), head.y, head.size, Color::GREEN));
    }
}

void Snake::update(double dt) {
    time += dt;
    head.draw();

    for (int i = 0; i < length(); i++) {
        body[i].draw();
    }

    if (time > speed && !stopped) {
        time = 0;
        move();
    }
}

void Snake::move() {
    for (int i = length() - 1; i > 0; i--) {
        body[i].x = body[i - 1].x;
        body[i].y = body[i - 1].y;
    }
    body[0].x = head.x;
    body[0].y = head.y;

    if (directionQueue.size() > 0) {
        currentDirection = directionQueue.back();
        directionQueue.pop_back();
    }
    switch (currentDirection) {
        case Direction::up:
            head.y -= 1;
            break;
        case Direction::down:
            head.y += 1;
            break;
        case Direction::left:
            head.x -= 1;
            break;
        case Direction::right:
            head.x += 1;
            break;
    }
}

int Snake::length() {
    return body.size();
}

void Snake::setDirection(Direction direction) {
    if (direction != currentDirection && (directionQueue.size() == 0 || directionQueue.front() != direction)) {
        Direction lastMove = directionQueue.size() == 0 ? currentDirection : directionQueue[0];
        switch (direction) {
            case Direction::up:
                if (lastMove != Direction::down)
                    directionQueue.insert(directionQueue.begin(), direction);
                break;
            case Direction::down:
                if (lastMove != Direction::up)
                    directionQueue.insert(directionQueue.begin(), direction);
                break;
            case Direction::left:
                if (lastMove != Direction::right)
                    directionQueue.insert(directionQueue.begin(), direction);
                break;
            case Direction::right:
                if (lastMove != Direction::left)
                    directionQueue.insert(directionQueue.begin(), direction);
                break;
        }
    }
}

int Snake::getX() {
    return head.x;
}

int Snake::getY() {
    return head.y;
}

void Snake::grow() {
    for (int i = 0; i < growAmount; i++) {
        body.push_back(GameObject(body.back().x, body.back().y, head.size, body.back().color));
    }
}

std::vector<GameObject> Snake::getBody() {
    return body;
}

void Snake::stop() {
    stopped = true;
}
