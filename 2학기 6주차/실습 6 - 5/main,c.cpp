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

	printf("물건 값을 입력하세요 :");
	scanf("%d", &price);

	printf("지급할 금액을 입력하세요 :");
	scanf("%d", &pay);

	g = pay - price;
	printf("거스름돈 : %d\n", g);

	printf("5000원 권 지폐 수 ; %d", g / 5000);
	change = g % 5000;

	printf("1000원 권 지폐 수 ; %d", change / 1000);
	change %= 1000;

	printf("500원 권 지폐 수 ; %d", change / 500);
	change %= 500;

	printf("100원 권 지폐 수 ; %d", change / 100);
	change %= 100;

	printf("50원 권 지폐 수 ; %d", change / 50);
	change %= 50;


	return 0;
}