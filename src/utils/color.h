//
// Created by osumf on 2/1/2017.
//

#ifndef SNAIKE_COLOR_H
#define SNAIKE_COLOR_H


class Color {

    public:
        float r;
        float g;
        float b;
        float a;

        Color();
        Color(float r, float g, float b);
        Color(float r, float g, float b, float a);

        static Color RED;
        static Color GREEN;
        static Color BLUE;
};


#endif //SNAIKE_COLOR_H
