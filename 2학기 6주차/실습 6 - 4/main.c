#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#define TAX 0.2

typedef int won;

int main(void) {
	won num = 0;
	won m_salary = 0;
	won y_salary = 0;
	double m = 0;
	double y = 0;

	while (1) {
		printf("������ �Է��ϼ��� :");
		scanf("%d", &num);
		
		if (num == 3) {
			exit(0);
		}
		else if (num == 1) {
			printf("������ �Է��ϼ��� :");
			scanf("%d", &m_salary);

			printf("���� ���� : %d\n", m_salary * 12);
			m = m_salary * TAX;
			printf("���� ���� : %.2lf\n", (m_salary -  m)* 12);

			system("pause");
			system("cls");
		}
		else if (num == 2) {
			printf("������ �Է��ϼ��� :");
			scanf("%d", &y_salary);

			printf("���� ���� : %.2lf \n", (double)y_salary / 12);
			y = y_salary / 12;
			printf("���� ���� : %.2lf \n", y-(y*TAX));

			system("pause");
			system("cls");
		}
		else {
			printf("�ٽ� �Է��ϼ���");

			system("pause");
			system("cls");
		}
	}

	return 0;
}