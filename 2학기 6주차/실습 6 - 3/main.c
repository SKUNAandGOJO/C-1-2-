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

	printf("����(����)�� �Է��ϼ���");
	scanf("%d", &m_salary);

	printf("������ %d (����)�Դϴ�.\n", m_salary * MONTH);
	tax = m_salary * TAX;
	printf("����� ���� �� ������ %.2lf (����)�Դϴ�.\n", tax);
	printf("����� �� ���ɾ��� %.2lf (����) �Դϴ�. \n", (m_salary - tax) * MONTH);


	return 0;
}