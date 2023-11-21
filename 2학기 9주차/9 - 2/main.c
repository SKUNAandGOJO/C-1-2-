#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int num = 0;
	int number = 0;
	int eSum = 0, oSum = 0;
	int b2 = 0, b3 = 0;

	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &num);

		if (num == 3) {
			exit(0);
		}
		else if (num == 1){
			printf("정수 입력 : ");
			scanf("%d", &number);

			for (int i = 0; i < number + 1; i++) {
			
				i % 2 == 0 
					? printf("%d 의 짝수 합 : %d\t\t", i, eSum += i)
					: printf("%d 의 홀수 합 : %d\n", i, oSum += i);
			}
			number = 0;
			system("pause");
			system("cls");

			
		}
		else if (num == 2) {
			printf("정수 입력 : ");
			scanf("%d", &number);

			for (int j = 1; j < number + 1; j++) {
				j % 2 == 0
					? printf("%d 2의 배수 합 : %d\t\t", j, b2 += j)
					: j % 3 == 0
					? printf("%d 3의 배수 합 : %d\n", j, b3 += j)
					: printf("\n");

				
			}

			for (int j = 1; j < number + 1; j++) {
				j % 2 == 0 && j % 3 == 0
					? printf("2와 3의 공배수 : %d\t\t", j)
					: printf("\n");
			}

			number = 0;
			system("pause");
			system("cls");


		}
		else {
			printf("다시 입력");

			system("pause");
			system("cls");
		}

	}
	return 0;
}