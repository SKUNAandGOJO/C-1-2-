#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int width = 0;
	int height = 0;

	printf("���� ���� : ");
	scanf("%d", &width);

	printf("���� ���� : ");
	scanf("%d", &height);

	printf("�簢���� ���� : %d\n", width * height);
	printf("�ﰢ���� ���� : %.1lf", (width * height)/2.0);

	system("pause");
	system("cls");


	int number = 0;
	int width1 = 0;
	int height1 = 0;

	while (1) {
		printf("������ �Է��ϼ��� 1. �簢��, 2. �ﰢ��, 3. ���� : ");
		scanf("%d", &number);
		if (number == 3) {
			exit(0);
		}
		else if (number == 1) {
			printf("���� ���� : ");
			scanf("%d", &width1);

			printf("���� ���� : ");
			scanf("%d", &height1);

			printf("�簢���� ���� : %d\n", width1 * height1);
			
		}
		else if (number == 2) {
			printf("���� ���� : ");
			scanf("%d", &width1);

			printf("���� ���� : ");
			scanf("%d", &height1);

			printf("�ﰢ���� ���� : %.1lf\n", (width1 * height1)/2.0);
			
		
		}
	}

	return 0;
}