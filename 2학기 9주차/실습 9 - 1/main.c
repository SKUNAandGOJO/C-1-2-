#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int n = 0, jn = 0, hn = 0;


	printf("정수 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		i % 2 == 0
			? printf("%d 의 짝수 합 : %d\t\t", i, jn += i)
			: printf("%d 의 홀수 합 : %d\n", i, hn += i);
		
		
	}
	return 0;
}