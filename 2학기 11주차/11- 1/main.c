#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#include "a.h"

int main(void) {
	int a = 0;

	printf("���� �Է� : ");
	scanf("%d", &a);

	printf("%d!�� ���� %d �̴�\n", a, fact(a));
	printf("1���� %d �� ������ �� : %d\n", a, sum(a));
	divisor(a);
	prime(a);




	return 0;
}