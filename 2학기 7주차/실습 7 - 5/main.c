#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	printf("정수 3개 입력 : ");
	scanf("%d %d %d", &a1, &a2, &a3);

	printf("최대값 : %d\n", (a1 > a2) ? (a1 > a3) ? a1 : a3 : (a2 > a3) ? a2 : a3);
	printf("중간값 : %d\n", (a1 > a2) ? ((a1 > a3) ? ((a2 > a3) ? a2 : a3) : a1) : ((a2 > a3) ? ((a1 > a3) ? a1 : a3) : a2));
	printf("최소값 : %d\n", (a1 < a2) ? (a1 < a3) ? a1 : a3 : (a2 < a3) ? a2 : a3);


	return 0;
}