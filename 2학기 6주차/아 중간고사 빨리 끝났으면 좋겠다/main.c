#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	double sup = 0;
	double hwa = 0;
	double supb = 0;
	double hwab = 0;
	
	printf("���� �µ� :");
	scanf("%.1lf", &sup);
    
	

	supb = (sup * 9 / 5) + 32;

	printf("���� �µ� %.1lf �� ȭ�� �µ��� ��ȯ => %.1lf\n", sup, supb);

	printf("ȭ�� �µ� :");
	scanf("%.1lf", &hwa);

	hwab = (hwa - 32) * 5 / 9;


	printf("ȭ�� �µ� %.1lf �� ���� �µ��� ��ȯ => %.1lf\n", hwa, hwab);

	return 0;
}