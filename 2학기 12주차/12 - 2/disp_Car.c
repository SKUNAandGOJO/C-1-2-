#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

int disp_car(int num, int distance) {
    printf("CAR #%d : ", num);

    for (int i = 0; i < distance / 10; i++) {
        printf("*");
    }
    printf("\n");
}