#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char op = 0;
	int number1 = 0;
	int number2 = 0;

	while (1) {
		printf("문자를 입력하세요 :");
		scanf("%c", &op);
		getchar();
		

		if (op == 'q' || op == 'Q') {
			exit(0);
		}
		else if (op == '+') {
			printf("정수 1을 입력하세요 :");
			scanf("%d", &number1);

			printf("정수 2를 입력하세요 :");
			scanf("%d", &number2);

			printf("%d + %d = %d", number1, number2, number1 + number2);

			system("pause");
			system("cls");
		}
		else if (op == '-') {
			printf("정수 1을 입력하세요 :");
			scanf("%d", &number1);

			printf("정수 2를 입력하세요 :");
			scanf("%d", &number2);


			printf("%d - %d = %d", number1, number2, number1 - number2);

			system("pause");
			system("cls");
		}
		else if (op == '*') {
			printf("정수 1을 입력하세요 :");
			scanf("%d", &number1);

			printf("정수 2를 입력하세요 :");
			scanf("%d", &number2);

			printf("%d * %d = %d", number1, number2, number1 * number2);

			system("pause");
			system("cls");
		}
		else if (op == '/') {
			printf("정수 1을 입력하세요 :");
			scanf("%d", &number1);

			printf("정수 2를 입력하세요 :");
			scanf("%d", &number2);

			printf("%d / %d = %.2if", number1, number2, (double)number1 / number2);

			system("pause");
			system("cls");
		}
		else if (op == '%') {
			printf("정수 1을 입력하세요 :");
			scanf("%d", &number1);

			printf("정수 2를 입력하세요 :");
			scanf("%d", &number2);

			printf("%d %% %d = %d", number1, number2, number1 % number2);

			system("pause");
			system("cls");
		}
		else {
			printf("다시 입력하세요 :");

			system("pause");
			system("cls");
		}

	}
	return 0;
}