#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*int num1 = 0;
	int num2 = 0;
	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("%d / %d = %.2lf\n", num1, num2, (double)num1 / num2);
	printf("�� : %d\n", num1 / num2);
	printf("������ : %d\n", num1 % num2);
	
	system("pause");
	system("cls");*/

	int number = 0;
	int number10 = 0;
	int number01 = 0;
	while (1){
		printf("���ڸ� ����(number)�� �Է� : ");
		scanf("%d", &number);

		if (number == 111) {
			exit(0);
		}
		else {

			printf("100�� �ڸ� : %d\n\n", number / 100);
			int number10 = number % 100;
			printf(" 10�� �ڸ� : %d\n\n", number10 / 10);
			int number01 = number % 10;
			printf("  1�� �ڸ� : %d\n\n", number01);

			system("pause");
			system("cls");

		}

	}

	return 0;
}