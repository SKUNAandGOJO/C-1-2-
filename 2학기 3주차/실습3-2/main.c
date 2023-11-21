#include <stdio.h>
#include <stdlib.h>
#define PHI 3.141592 // 심볼릭 상수

int main(void) {
	double radius = 0;

	printf("반지름 : ");
	scanf("%lf", &radius);

	printf("원의 넓이 : %.2lf\n", PHI * radius * radius);
	printf("원의 둘레 : %.2lf", PHI * radius * 2);

	system("pause");
	system("cls");

	int number = 0;

	while (1) {
		printf("한 문자(ch)를 입력하세요 a. 넓이, b. 둘레, q. 종료 : ");
		getchar();
		scanf("%c", &number);

		if (number == 'q') {
			exit(0);
		}
		else if (number == 'a') {
			
			printf("반지름 : ");
			scanf("%lf", &radius);

			printf("원의 넓이 : %.2lf\n", PHI * radius * radius);

		}
		else if (number == 'b') {
			printf("반지름 : ");
			scanf("%lf", &radius);


			printf("원의 둘레 : %.2lf\n", PHI * radius * 2);

		}
		else {
			printf("다시 입력하세요\n");
		}
	}
	return 0;
}