#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int a = 0;


	printf("정수 입력 : ");
	scanf("%d", &a);

	printf("3의 배수이자 4의 배수인 것 || 3의 배수이자 4의 배수가 아닌 것");

	for (int i = 0; i < a + 1; i++) {
		(i % 3 == 0) && (i % 4 == 0) ?
				printf("%d\n", i) :
				printf("\t\t\t\t %d\n", i);
	}
	

	return 0;
}