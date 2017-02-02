//
// Created by osumf on 2/1/2017.
//

#include "color.h"

Color::Color() {
    r = 1;
    g = 1;
    b = 1;
    a = 1;
}

Color::Color(float r, float g, float b) {
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = 1;
}

Color::Color(float r, float g, float b, float a) {
    Color(r, g, b);
    this->a = a;
}

Color Color::RED = Color(1, .25, .5);
Color Color::GREEN = Color(0, 1, .5);
Color Color::BLUE = Color(0, .5, 1);
