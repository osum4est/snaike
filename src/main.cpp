#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "snake/snake_game.h"
#include "utils/input.h"

int main() {
    int width = 640, height = 480;

    GLFWwindow* window;

    if (!glfwInit()) {
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Snaike", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
    glfwSwapInterval(1);
    glClearColor(.1, .1, .1, 1);

    glfwSetKeyCallback(window, Input::keypressCallback);

    double lastTime;
    double currentTime;
    double dt;

    SnakeGame game(width, height);

    while (!glfwWindowShouldClose(window)) {
        lastTime = currentTime;
        currentTime = glfwGetTime();
        dt = currentTime - lastTime;

        glfwGetFramebufferSize(window, &width, &height);

        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glad_glOrtho(0, width, height, 0, -1, 1);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        glClear(GL_COLOR_BUFFER_BIT);

        game.update(dt);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}