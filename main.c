#include <stdio.h>
#include "noise1234.h"

int main(int argc, char **argv) {
    float map[10*10];
    float scale = 0.2;

    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 10; x++){
            float Y = (float)y * scale;
            float X = (float)x * scale;

            map[y*10 + x] = noise2(X, Y);
            printf("%f\n", map[y*10 + x]);
        }
    }

    return 0;
}