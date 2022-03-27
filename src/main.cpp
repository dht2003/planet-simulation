#include <iostream>
#include <SDL2/SDL.h>
#include "vector2d.hpp"


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int main(int argc, char *argv[]) {
    vector2d<float> vc1(1,1);
    vector2d<float> vc2(2,2);

    vector2d<float> vc3 = vc1 - vc2 * 3;
    vc3.print();

}