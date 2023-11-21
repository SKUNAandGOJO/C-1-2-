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
		printf("문자를 입력하세요 :");
		scanf("%c", &ch);
		getchar();

		if (ch == 'q'|| ch=='Q') {
			exit(0);
		}
		else if (ch == 'i' || ch == 'l') {
			printf("물건 값을 입력 ;");
			scanf("%d", &price);

			printf("지불 금액을 입력 ;");
			scanf("%d", &pay);

			g = pay - price;
			printf("10000원 권 지폐 수 : %d\n", g / 10000);
			change = g % 10000;

			printf("5000원 권 지폐 수 : %d\n", change / 5000);
			change %= 5000;

			printf("1000원 권 지폐 수 : %d\n", change / 1000);
			change %= 1000;

			printf("500원 권 동전 수 : %d\n", change / 500);
			change %= 500;

			printf("100원 권 동전 수 : %d\n", change / 100);
			change %= 100;

			printf("50원 권 동전 수 ; %d\n", change / 50);
			change %= 50;

			printf("10원 권 동전 수 : %d\n", change / 10);

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