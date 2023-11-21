#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int sum(int c) {
	int re = 0;
	for (int i = 1; i <= c; i++) {
		re = re + i;
	}
	return re;
}