#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>
#define SIZE 10

#include "myhead.h"

int main(void) {
	int data[SIZE] = { 0 };

	printf("-------------------------------------------------------------------------------------\n");
	printf("1	2	3	4	5	6	7	8	9	10\n");
	printf("-------------------------------------------------------------------------------------\n");

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++){
		data[i] = rand() % 99 + 1;
		printf("%d      ", data[i]);

	}
	printf("\n");

	minimum(data, SIZE); //void minimum(int*, int)
	funcA(data, SIZE);

	return 0;
}