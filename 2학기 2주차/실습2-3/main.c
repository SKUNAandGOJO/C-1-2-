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

	//Ű����κ��� num, num2 ������ �Է¹޴´�
	char op = 0; // ������
	//�����ڸ� Ű����� �Է¹޴´�.


	printf("�����ڸ� �Է��ϼ��� : ");
	scanf("%c", &op);

	printf("ù�� ° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("�ι� ° ���ڸ� �Է��ϼ��� : ");
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