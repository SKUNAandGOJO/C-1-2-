#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int year = 0;
	char Year = 0;

	printf("������ �Է� : ");
	scanf("%d", &year);

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ?
		"����" : "������ �ƴϾ�";
	/*��¹����� �ؾ� ��*/


	return 0;
}