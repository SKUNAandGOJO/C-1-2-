#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void minimum(int* bp, int s) {
	int min = 0;
	int a = 0;

	min = bp[0];

	for (int i = 1; i < s; i++) {
		if (bp[i] < min) {
			min = bp[i];
			a = i;
		}
	}

	printf("�ּҰ��� %d ��°�� ������ %d �Դϴ�.\n", a+1, min);
}