#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#define TAX 0.1
#define MONTH 12

typedef int don;

int main(void) {
	don m_salary = 0;
	double tax = 0;

	printf("월급(만원)을 입력하세요");
	scanf("%d", &m_salary);

	printf("연봉은 %d (만원)입니다.\n", m_salary * MONTH);
	tax = m_salary * TAX;
	printf("당신이 내야 할 세금은 %.2lf (만원)입니다.\n", tax);
	printf("당신의 실 수령액은 %.2lf (만원) 입니다. \n", (m_salary - tax) * MONTH);


	return 0;
}