#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int a = 0; int b = 0;
	char op = 0;


	while (1) {
		printf("�����ڸ� �Է��ϼ��� :");
		scanf("%c", op);
		getchar();

		printf("ù��° ����");
		scanf("%d", a);

		printf("ù��° ����");
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
			printf("�ٽ� �Է��ϼ���");

			system("pause");
			system("cls");
		}

	}
	return 0;
}