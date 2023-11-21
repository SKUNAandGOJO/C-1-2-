#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int jung = 0;
	int ary[3] = { 0 };
	int a = 0;


	while (1) {
		printf("문자(ch) 입력 : ");
		scanf("%c", &ch);
		getchar();
		

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'i' || ch == 'I') {
			printf("정수를 입력하세요 : ");
			scanf("%d", &jung);

			if (jung > CHAR_MAX) {
				printf("%d ==> 오버플로우가 된 값 %d :: 초과된 수치 %d\n", jung, (char)jung, jung - CHAR_MAX);
				getchar();
			}
			else if (jung < CHAR_MIN) {
			printf("%d ==> 언더플로우가 된 값 %d :: 초과된 수치 %d\n", jung, (char)jung, CHAR_MIN - jung);
			    getchar();
		    }
			else {
				printf("%d 가 문자형으로 변환된 것 : %c\n", jung, jung);
				getchar();
			}

			system("pause");
			system("cls");

		}
		else if (ch == 'c' || ch == 'C') {
			printf("%d %d %d", 'n', 'g', 'w');

			printf("값을 입력하세요 : ");
			for (int i = 0; i <= 4; i++) {

				scanf("%d", &a);

				ary[i] = a;
			}

			for (int i = 0; i <= 4; i++) {
				printf("%c", ary[i]);

			}

			system("pause");
			system("cls");

		}
		
		else {
			printf("다시 입력해라 개새이야");

			system("pause");
			system("cls");
		}
	}

	return 0;
}