#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int a = 0;
	//char year[2023] = { 0 };
	

	while (1) {
		printf("문자 입력(ch) : ");
		scanf("%c", &ch);
		getchar();

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'i' || ch == 'I') {
			printf("정수입력 : ");
			scanf("%d", &a);
			
			while (a < 2024) {
				((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)) ?
					printf("%d", a) : printf("\n");

				++a;

			}
			system("pause");
			system("cls");
		}
		else {
			printf("다시 입력하세요");

			system("pause");
			system("cls");
		}
	
	}


	return 0;
}