#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int a = 0; int b = 0;
	char op = 0;


	while (1) {
		printf("연산자를 입력하세요 :");
		scanf("%c", op);
		getchar();

		printf("첫번째 정수");
		scanf("%d", a);

		printf("첫번째 정수");
		scanf("%d", b);

		if (op == "+") {
			printf("%d + %d = %d", a, b, a + b);
		}
		else if (op == "-") {
			printf("%d - %d = %d", a, b, a - b);
		}
		else if (op == "*") {
			printf("%d * %d = %d", a, b, a * b);
		}
		else if (op == "/") {
			printf("%d - %d = %.2lf", a, b, (double)a / b);
		}
		else if (op == "%") {
			printf("%d %% %d = %d", a, b, a % b);
		}
		else {
			printf("다시 입력하세요");

			system("pause");
			system("cls");
		}

	}
	return 0;
}