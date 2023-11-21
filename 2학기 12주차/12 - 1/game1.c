#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void game1(int x) {
	int computer = 0;

	srand((unsigned)time(NULL));
	computer = rand() % 2;

	if (x == computer)
		printf("»ç¿ëÀÚ ½Â¸®\n");
	else
		printf("computer ½Â¸®\n");
	
}