#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int width = 0;
	int height = 0;

	printf("가로 길이 : ");
	scanf("%d", &width);

	printf("세로 길이 : ");
	scanf("%d", &height);

	printf("사각형의 넓이 : %d\n", width * height);
	printf("삼각형의 넓이 : %.1lf", (width * height)/2.0);

	system("pause");
	system("cls");


	int number = 0;
	int width1 = 0;
	int height1 = 0;

	while (1) {
		printf("정수를 입력하세요 1. 사각형, 2. 삼각형, 3. 종료 : ");
		scanf("%d", &number);
		if (number == 3) {
			exit(0);
		}
		else if (number == 1) {
			printf("가로 길이 : ");
			scanf("%d", &width1);

			printf("세로 길이 : ");
			scanf("%d", &height1);

			printf("사각형의 넓이 : %d\n", width1 * height1);
			
		}
		else if (number == 2) {
			printf("가로 길이 : ");
			scanf("%d", &width1);

			printf("세로 길이 : ");
			scanf("%d", &height1);

			printf("삼각형의 넓이 : %.1lf\n", (width1 * height1)/2.0);
			
		
		}
	}

	return 0;
}