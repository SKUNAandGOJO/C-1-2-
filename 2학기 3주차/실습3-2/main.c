#include <stdio.h>
#include <stdlib.h>
#define PHI 3.141592 // �ɺ��� ���

int main(void) {
	double radius = 0;

	printf("������ : ");
	scanf("%lf", &radius);

	printf("���� ���� : %.2lf\n", PHI * radius * radius);
	printf("���� �ѷ� : %.2lf", PHI * radius * 2);

	system("pause");
	system("cls");

	int number = 0;

	while (1) {
		printf("�� ����(ch)�� �Է��ϼ��� a. ����, b. �ѷ�, q. ���� : ");
		getchar();
		scanf("%c", &number);

		if (number == 'q') {
			exit(0);
		}
		else if (number == 'a') {
			
			printf("������ : ");
			scanf("%lf", &radius);

			printf("���� ���� : %.2lf\n", PHI * radius * radius);

		}
		else if (number == 'b') {
			printf("������ : ");
			scanf("%lf", &radius);


			printf("���� �ѷ� : %.2lf\n", PHI * radius * 2);

		}
		else {
			printf("�ٽ� �Է��ϼ���\n");
		}
	}
	return 0;
}