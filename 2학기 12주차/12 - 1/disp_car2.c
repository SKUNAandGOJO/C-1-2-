#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>


int disp_car2(int num, int distance) {
    printf("CAR #%d : ", num);
    printf("林青茄 芭府 : %d\n", distance);

    for (int i = 0; i < distance; i++) {
        
        printf("*");
    }
    printf("\n");
    if (distance >= 50) {
        printf("CAR #%d 狼 铰府 ", num);
        
        system("pause");
        system("cls");
    }

    return 0;
}