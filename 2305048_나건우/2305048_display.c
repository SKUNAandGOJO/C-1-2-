#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display(char* a, int* d, int S) {

	printf("%s", a);
	for (int i = 0; i < S; i++) {
	
		printf("%d ", d[i]);
	}
	printf("\n");


}