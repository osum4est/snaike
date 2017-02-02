//
// Created by osumf on 2/1/2017.
//

#include <glad/glad.h>
#include "drawing.h"

void Drawing::drawSquare(int x, int y, int size, Color color) {
    glBegin(GL_QUADS);
    glColor3f(color.r, color.g, color.b);
    glVertex2d(x, y);
    glVertex2d(x + size, y);
    glVertex2d(x + size, y + size);
    glVertex2d(x, y + size);
    glEnd();
}
