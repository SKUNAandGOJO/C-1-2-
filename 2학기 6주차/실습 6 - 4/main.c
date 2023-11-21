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
		printf("정수를 입력하세요 :");
		scanf("%d", &num);
		
		if (num == 3) {
			exit(0);
		}
		else if (num == 1) {
			printf("월급을 입력하세요 :");
			scanf("%d", &m_salary);

			printf("세전 연봉 : %d\n", m_salary * 12);
			m = m_salary * TAX;
			printf("세후 연봉 : %.2lf\n", (m_salary -  m)* 12);

			system("pause");
			system("cls");
		}
		else if (num == 2) {
			printf("연봉을 입력하세요 :");
			scanf("%d", &y_salary);

			printf("세전 월급 : %.2lf \n", (double)y_salary / 12);
			y = y_salary / 12;
			printf("세후 월급 : %.2lf \n", y-(y*TAX));

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