#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void divisor(int d) {
	for (int i = 1; i <= d; i++) {
		if (d % i == 0) {
			printf("��� : %d\n", i);
		}
	}
}