#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int fact(int b) {
	int r = 1;
	for (int i = 1; i <= b; i++) {
		r = r * i;
	}
	return r;

}