#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int number = 0;

	printf("정수 입력 :");
	scanf("%d", &number);

	printf("입력된 정수값 : %d\n", number);
	printf("입력된 정수값을 char로 변환했을 때 : %d\n", (char)number);
	printf("입력된 정수값이 오버플로우가 된 정도: %d\n",number - CHAR_MAX);
	printf("입력된 정수값이 언더플로우가 된 정도 : %d\n", CHAR_MIN - number);

	system("pause");
	system("cls");

	/*printf("%d, %d, %d, %d, %d", 'H', 'E', 'L', 'L', 'O');*/

	int ary[5] = { 0 };
	int a = 0;

	printf("값을 입력하세요 : ");
	for (int i = 0; i < 5; i++) {
		
		scanf("%d", &a);

		ary[i] = a;
	}

	for (int i = 0; i < 5; i++) {
		printf("%c", ary[i]);

	}
	printf("\n");
	return 0;
}