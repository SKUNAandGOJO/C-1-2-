#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char op = 0;
	int number1 = 0;
	int number2 = 0;

	while (1) {
		printf("���ڸ� �Է��ϼ��� :");
		scanf("%c", &op);
		getchar();
		

		if (op == 'q' || op == 'Q') {
			exit(0);
		}
		else if (op == '+') {
			printf("���� 1�� �Է��ϼ��� :");
			scanf("%d", &number1);

			printf("���� 2�� �Է��ϼ��� :");
			scanf("%d", &number2);

			printf("%d + %d = %d", number1, number2, number1 + number2);

			system("pause");
			system("cls");
		}
		else if (op == '-') {
			printf("���� 1�� �Է��ϼ��� :");
			scanf("%d", &number1);

			printf("���� 2�� �Է��ϼ��� :");
			scanf("%d", &number2);


			printf("%d - %d = %d", number1, number2, number1 - number2);

			system("pause");
			system("cls");
		}
		else if (op == '*') {
			printf("���� 1�� �Է��ϼ��� :");
			scanf("%d", &number1);

			printf("���� 2�� �Է��ϼ��� :");
			scanf("%d", &number2);

			printf("%d * %d = %d", number1, number2, number1 * number2);

			system("pause");
			system("cls");
		}
		else if (op == '/') {
			printf("���� 1�� �Է��ϼ��� :");
			scanf("%d", &number1);

			printf("���� 2�� �Է��ϼ��� :");
			scanf("%d", &number2);

			printf("%d / %d = %.2if", number1, number2, (double)number1 / number2);

			system("pause");
			system("cls");
		}
		else if (op == '%') {
			printf("���� 1�� �Է��ϼ��� :");
			scanf("%d", &number1);

			printf("���� 2�� �Է��ϼ��� :");
			scanf("%d", &number2);

			printf("%d %% %d = %d", number1, number2, number1 % number2);

			system("pause");
			system("cls");
		}
		else {
			printf("�ٽ� �Է��ϼ��� :");

			system("pause");
			system("cls");
		}

	}
	return 0;
}