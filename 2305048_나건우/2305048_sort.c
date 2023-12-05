#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int* d, int S) {
	int temp = 0;
	
	printf("정렬 후 배열 값 : ");
	for (int i = 0; i < S - 1; i++) {
		for (int j = 0; j < S - 1 -i; j++){
			if (d[j] > d[j + 1]) {
				temp = d[j];
				d[j] = d[j + 1];
				d[j + 1] = temp;

			}
		}
	}
	for (int k = 0; k < S; k++) {
		printf("%d ", d[k]);
	}
	printf("\n");
}

