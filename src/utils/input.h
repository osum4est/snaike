//
// Created by osumf on 2/1/2017.
//

#ifndef SNAIKE_INPUT_H
#define SNAIKE_INPUT_H


#include <GLFW/glfw3.h>

class Input {
    private:
        Input() {} // Disallows creating instance
        static int pressedKey;

    public:
        static void keypressCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
        static int getPressedKey();
};



#endif //SNAIKE_INPUT_H
