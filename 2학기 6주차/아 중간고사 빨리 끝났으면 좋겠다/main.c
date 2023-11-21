#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	double sup = 0;
	double hwa = 0;
	double supb = 0;
	double hwab = 0;
	
	printf("¼·¾¾ ¿Âµµ :");
	scanf("%.1lf", &sup);
    
	

	supb = (sup * 9 / 5) + 32;

	printf("¼·¾¾ ¿Âµµ %.1lf ¸¦ È­¾¾ ¿Âµµ·Î º¯È¯ => %.1lf\n", sup, supb);

	printf("È­¾¾ ¿Âµµ :");
	scanf("%.1lf", &hwa);

	hwab = (hwa - 32) * 5 / 9;


	printf("È­¾¾ ¿Âµµ %.1lf ¸¦ ¼·¾¾ ¿Âµµ·Î º¯È¯ => %.1lf\n", hwa, hwab);

	return 0;
}