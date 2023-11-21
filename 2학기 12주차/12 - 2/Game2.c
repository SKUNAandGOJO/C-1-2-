#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

int game2(void) {
	int car1 = 0, car2 = 0;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 6; i++) {
		car1 += rand() % 99 + 1;
		car2 += rand() % 99 + 1;

		disp_car(1, car1);
		disp_car(2, car2);

		printf("=================================================================\n");
		system("pause");
	}
	
}