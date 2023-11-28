#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void display(int* bp, int s) {
	printf("------------------------------------------------------------------------------\n");
	printf("1	2	3	4	5	6	7	8	9	10\n");
	printf("------------------------------------------------------------------------------\n");
	for (int i = 0; i < s; i++) {
		printf("%d       ", bp[i]);
	}
	printf("\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n");
}