#include <stdio.h>
#include <stdlib.h>
#define RATE1 1345.13
#define RATE2 1298.87
// ��ȭ �� �� ȯ�� 
// ��ȭ �� �� ȯ��
#define JPY1 910.38
#define JPY2 879.08

int main(void) {
	// 1�޷� : 1322.02
	double rate = 0.0, krw = 0, usd= 0;

	/*printf("ȯ�� �Է� : ");
	scanf("%lf", &rate);

	printf("��ȭ �Է� : ");
	scanf("%lf", &krw);

	printf("%.2lf���� %.2lf�޷� �Դϴ�.\n", krw, krw/RATE1);

	printf("�޷� �Է� : ");
	scanf("%lf", &usd);

	printf("%.2lf�޷��� %.2lf�� �Դϴ�.\n", usd, usd*RATE2);

	system("pause");
	system("cls");*/
	char choice = 0;
	double jp = 0;

	while (1) {
	// ����(choice) �Է�
		// q Q : ����
		// j 
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%c", &choice);
		getchar();

		if (choice == 'q' || choice == 'Q') {
			exit(0);
		}
		else if (choice == 'w' || choice == 'W') {
			printf("��ȭ �Է� : ");
			scanf("%lf", &krw);
			getchar();

			printf("%.2lf���� %.2lf�� �Դϴ�.\n", krw, (krw / JPY1)*100);

			system("pause");
			system("cls");
		}
		else if (choice == 'j' || choice == 'J') {
			printf("��ȭ �Է� : ");
			scanf("%lf", &jp);
			getchar();

			printf("%.2lf�� %.2lf�� �Դϴ�.\n", jp, jp * JPY2);

			system("pause");
			system("cls");
		}
		else  {
			printf("�ٽ� �Է��ϼ���\n");
			system("pause");
			system("cls");
		}
	}

	return 0;
}