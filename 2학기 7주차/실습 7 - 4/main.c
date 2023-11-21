#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int a = 0;
	int S3 = 0;
	int S4 = 0;

	while (1) {
		printf("문자(ch) 입력 : ");
		scanf("%c", &ch);
		

		if (ch == 'q' || ch == 'Q'){
			exit(0);
		}
		else if (ch == 'i' || ch == 'I') {
			printf("정수 입력 :");
			scanf("%d", &a);

			printf("3의 배수합 || 4의 배수합\n\n");

			for (int i = 0; i < a + 1; i++) {
			
				if (i % 3 == 0) {
					if (i % 12 == 0) {
						printf("\n");
						continue;
					}
					S3 = S3 + i;
					printf("%d일 때 3의 배수합 : %d\t\t", i, S3);

				}
				else if (i % 4 == 0) {
					if (i % 12 == 0) {
						printf("\n");
						continue;
					}
					S4 = S4 + i;
					printf("%d일 때 4의 배수합 : %d\n", i, S4);
				}
				
			}
			
			

		
		}
		else {
			printf("다시 입력");

			system("pause");
			system("cls");
		}
	}
	getchar();
	return 0;
}