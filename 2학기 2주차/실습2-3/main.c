#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("%d + %d = %2d\n", 2, 3, 2 + 3);
	printf("%d - %d = %2d\n", 2, 3, 2 - 3);
	printf("%d * %d = %2d\n", 2, 3, 2 * 3);
	printf("%d / %d = %.1lf\n", 2, 3, 2.0 / 3);

	system("pause");
	system("cls");

	int num = 5, num2 = 4;

    printf("%d + %d = %2d\n", num, num2, num + num2);
	printf("%d - %d = %2d\n", num, num2, num - num2);
	printf("%d * %d = %2d\n", num, num2, num * num2);
	printf("%d / %d = %.1lf\n", num, num2, (double)num / num2);

	system("pause");
	system("cls");

	//키보드로부터 num, num2 정수를 입력받는다
	char op = 0; // 연산자
	//연산자를 키보드로 입력받는다.


	printf("연산자를 입력하세요 : ");
	scanf("%c", &op);

	printf("첫번 째 숫자를 입력하세요 : ");
	scanf("%d", &num);

	printf("두번 째 숫자를 입력하세요 : ");
	scanf("%d", &num2);

	if (op == '+') {
		printf("%d + %d = %2d\n", num, num2, num + num2);
	}
	else if (op == '-') {
		printf("%d - %d = %2d\n", num, num2, num - num2);
	}
	else if (op == '*') {
		printf("%d * %d = %2d\n", num, num2, num * num2);
	}
	else if (op == '/') {
		printf("%d / %d = %.1lf\n", num, num2, (double)num / num2);
	}

	return 0;
}