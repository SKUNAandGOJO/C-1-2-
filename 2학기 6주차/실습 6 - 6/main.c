#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int price = 0;
	int pay = 0;
	int change = 0;
	int g = 0;

	while (1) {
		printf("���ڸ� �Է��ϼ��� :");
		scanf("%c", &ch);
		getchar();

		if (ch == 'q'|| ch=='Q') {
			exit(0);
		}
		else if (ch == 'i' || ch == 'l') {
			printf("���� ���� �Է� ;");
			scanf("%d", &price);

			printf("���� �ݾ��� �Է� ;");
			scanf("%d", &pay);

			g = pay - price;
			printf("10000�� �� ���� �� : %d\n", g / 10000);
			change = g % 10000;

			printf("5000�� �� ���� �� : %d\n", change / 5000);
			change %= 5000;

			printf("1000�� �� ���� �� : %d\n", change / 1000);
			change %= 1000;

			printf("500�� �� ���� �� : %d\n", change / 500);
			change %= 500;

			printf("100�� �� ���� �� : %d\n", change / 100);
			change %= 100;

			printf("50�� �� ���� �� ; %d\n", change / 50);
			change %= 50;

			printf("10�� �� ���� �� : %d\n", change / 10);

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