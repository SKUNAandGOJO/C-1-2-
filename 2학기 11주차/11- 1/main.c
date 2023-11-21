#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#include "a.h"

int main(void) {
	int a = 0;

	printf("정수 입력 : ");
	scanf("%d", &a);

	printf("%d!의 값은 %d 이다\n", a, fact(a));
	printf("1부터 %d 값 까지의 값 : %d\n", a, sum(a));
	divisor(a);
	prime(a);




	return 0;
}