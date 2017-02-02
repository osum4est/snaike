//
// Created by osumf on 2/1/2017.
//

#include "game_object.h"
#include "../utils/drawing.h"

GameObject::GameObject() {
    x = 0;
    y = 0;
    size = 20;
}

GameObject::GameObject(int x, int y, int size, Color color) : color(color) {
    this->x = x;
    this->y = y;
    this->size = size;
}

void GameObject::draw() {
    Drawing::drawSquare((x * size) + 2, (y * size) + 2, size-4, color);
}


