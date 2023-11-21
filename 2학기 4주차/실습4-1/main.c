#include <stdio.h>
#include <stdlib.h>
#define RATE1 1345.13
#define RATE2 1298.87
// 엔화 살 때 환율 
// 엔화 팔 때 환율
#define JPY1 910.38
#define JPY2 879.08

int main(void) {
	// 1달러 : 1322.02
	double rate = 0.0, krw = 0, usd= 0;

	/*printf("환율 입력 : ");
	scanf("%lf", &rate);

	printf("원화 입력 : ");
	scanf("%lf", &krw);

	printf("%.2lf원은 %.2lf달러 입니다.\n", krw, krw/RATE1);

	printf("달러 입력 : ");
	scanf("%lf", &usd);

	printf("%.2lf달러는 %.2lf원 입니다.\n", usd, usd*RATE2);

	system("pause");
	system("cls");*/
	char choice = 0;
	double jp = 0;

	while (1) {
	// 문자(choice) 입력
		// q Q : 종료
		// j 
		printf("문자를 입력하세요 : ");
		scanf("%c", &choice);
		getchar();

		if (choice == 'q' || choice == 'Q') {
			exit(0);
		}
		else if (choice == 'w' || choice == 'W') {
			printf("원화 입력 : ");
			scanf("%lf", &krw);
			getchar();

			printf("%.2lf원은 %.2lf엔 입니다.\n", krw, (krw / JPY1)*100);

			system("pause");
			system("cls");
		}
		else if (choice == 'j' || choice == 'J') {
			printf("엔화 입력 : ");
			scanf("%lf", &jp);
			getchar();

			printf("%.2lf엔 %.2lf원 입니다.\n", jp, jp * JPY2);

			system("pause");
			system("cls");
		}
		else  {
			printf("다시 입력하세요\n");
			system("pause");
			system("cls");
		}
	}

	return 0;
}