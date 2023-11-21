#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14
#define length 5.0

int main(void) {
	double width = 0, height = 0; 

	/*printf("밑변 : ");
	scanf("%lf", &width);

	printf("높이 : ");
	scanf("%lf", &height);

	printf("사각형의 넓이 : %.2lf\n", width * height);
	printf("사각형의 둘레 : %.2lf\n", (width + height)*2);

	int pita = sqrt((width * width) + (height * height));
	printf("직삼각형의 넓이 : %.2lf\n", pita);

	int pita2 = width + height + sqrt((width * width) + (height * height));
	printf("직삼각형의 둘레 : %.2lf\n", pita2);

	system("pause");
	system("pause");*/

	char choice = 0;
	int one = 0;
    int pita1 = length + length + length;
	/*float a = pow((length / 2), 2);
	float nop = sqrt(a - pow(length, 2));
    float pita2 = (length * nop);*/



	while (1) {
		printf("문자 입력 : ");
		scanf("%c", &choice);
		getchar();

		if (choice == 'q' || choice == 'Q') {
			exit(0);

		}
		else if (choice == 'c' || choice == 'C') {
			printf("원의 반지름 입력 : ");
			scanf("%d", &one);
			getchar();

			printf("원의 넓이 : %.2lf\n", one * one * PHI);
			printf("원의 둘레 : %.2lf\n", 2 * one * PHI);

			system("pause");
			system("cls");
		}

		else if (choice == 't' || choice == 'T') {
			
			printf("정삼각형의 둘레 : %.2lf\n", (float)pita1);
			printf("정삼각형의 넓이 : %.2lf\n", length*sqrt((length*length)-(length/2*length/2))/2);

			system("pause");
			system("cls");
		
		}

		else if (choice == 'r' || choice == 'R') {
			printf("밑변 : ");
			scanf("%lf", &width);
			getchar();

			printf("높이 : ");
			scanf("%lf", &height);
			getchar();


			printf("사각형의 넓이 : %.2lf\n", width * height);
			printf("사각형의 둘레 : %.2lf\n", (width + height) * 2);

			system("pause");
			system("cls");

		}

		else {
			printf("다시 입력하세요");
			system("pause");
			system("cls");
		}

	
	}
}
