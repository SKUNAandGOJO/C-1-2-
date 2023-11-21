#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

int game3() {
	int car1 = 0, car2 = 0, car3 = 0, car4 = 0;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 99 ; i++) {
		car1 += rand() % 11;
		car2 += rand() % 11;
		car3 += rand() % 11;
		car4 += rand() % 11;

		disp_car2(1, car1);
		disp_car2(2, car2);
		disp_car2(3, car3);
		disp_car2(4, car4);

		printf("=================================================================\n");
		system("pause");
	}
	return 0;
}