#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int price = 0;
	int change = 0;
	double change1 = 0;
	int pay = 0;
	int g = 0;

	printf("���� ���� �Է��ϼ��� :");
	scanf("%d", &price);

	printf("������ �ݾ��� �Է��ϼ��� :");
	scanf("%d", &pay);

	g = pay - price;
	printf("�Ž����� : %d\n", g);

	printf("5000�� �� ���� �� ; %d", g / 5000);
	change = g % 5000;

	printf("1000�� �� ���� �� ; %d", change / 1000);
	change %= 1000;

	printf("500�� �� ���� �� ; %d", change / 500);
	change %= 500;

	printf("100�� �� ���� �� ; %d", change / 100);
	change %= 100;

	printf("50�� �� ���� �� ; %d", change / 50);
	change %= 50;


	return 0;
}