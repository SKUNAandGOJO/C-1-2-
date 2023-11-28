#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void funcA(int* bp, int s) {
	int max = 0;
	int a = 0;

	max = bp[0];

	for (int i = 1; i < s; i++) {
		if (bp[i] > max) {
			max = bp[i];
			a = i;
		}
	}

	printf("최대값은 %d 번째에 있으며 %d 입니다.\n", a + 1, max);
}