//
// Created by osum4est on 2/2/17.
//

#include <cstdlib>
#include <iostream>
#include "utils.h"

int Utils::randomBetween(int low, int high) {
    int n = high - low + 1;
    int remainder = RAND_MAX % n;
    int x;
    do{
        x = rand();
    }while (x >= RAND_MAX - remainder);
    return low + x % n;
}

void Utils::print(std::string text) {
    std::cout << text << std::endl;
}

void Utils::print(int number) {
    print(std::to_string(number));
}
