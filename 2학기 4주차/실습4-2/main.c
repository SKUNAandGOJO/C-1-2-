#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14
#define length 5.0

int main(void) {
	double width = 0, height = 0; 

	/*printf("�غ� : ");
	scanf("%lf", &width);

	printf("���� : ");
	scanf("%lf", &height);

	printf("�簢���� ���� : %.2lf\n", width * height);
	printf("�簢���� �ѷ� : %.2lf\n", (width + height)*2);

	int pita = sqrt((width * width) + (height * height));
	printf("���ﰢ���� ���� : %.2lf\n", pita);

	int pita2 = width + height + sqrt((width * width) + (height * height));
	printf("���ﰢ���� �ѷ� : %.2lf\n", pita2);

	system("pause");
	system("pause");*/

	char choice = 0;
	int one = 0;
    int pita1 = length + length + length;
	/*float a = pow((length / 2), 2);
	float nop = sqrt(a - pow(length, 2));
    float pita2 = (length * nop);*/



	while (1) {
		printf("���� �Է� : ");
		scanf("%c", &choice);
		getchar();

		if (choice == 'q' || choice == 'Q') {
			exit(0);

		}
		else if (choice == 'c' || choice == 'C') {
			printf("���� ������ �Է� : ");
			scanf("%d", &one);
			getchar();

			printf("���� ���� : %.2lf\n", one * one * PHI);
			printf("���� �ѷ� : %.2lf\n", 2 * one * PHI);

			system("pause");
			system("cls");
		}

		else if (choice == 't' || choice == 'T') {
			
			printf("���ﰢ���� �ѷ� : %.2lf\n", (float)pita1);
			printf("���ﰢ���� ���� : %.2lf\n", length*sqrt((length*length)-(length/2*length/2))/2);

			system("pause");
			system("cls");
		
		}

		else if (choice == 'r' || choice == 'R') {
			printf("�غ� : ");
			scanf("%lf", &width);
			getchar();

			printf("���� : ");
			scanf("%lf", &height);
			getchar();


			printf("�簢���� ���� : %.2lf\n", width * height);
			printf("�簢���� �ѷ� : %.2lf\n", (width + height) * 2);

			system("pause");
			system("cls");

		}

		else {
			printf("�ٽ� �Է��ϼ���");
			system("pause");
			system("cls");
		}

	
	}
}
