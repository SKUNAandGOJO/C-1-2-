#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void prime(int d) {
	int swh = 0;
	int sum = 0;

	for (int i = 2; i <= d; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 0) {
				swh++;
			}
			else if (i % j == 0) {
				swh++;
			}

		}
		if (swh == 2) {
			printf("�Ҽ� : %d\n", i);
			sum = sum + i;
		}

		swh = 0;
	}
	printf("�Ҽ��� �� : %d", sum);
}