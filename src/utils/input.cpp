//
// Created by osumf on 2/1/2017.
//

#include "input.h"

int Input::pressedKey = 0;

void Input::keypressCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (action == GLFW_PRESS)
        pressedKey = key;
}

int Input::getPressedKey() {
    int key = pressedKey;
    pressedKey = 0;
    return key;
}
