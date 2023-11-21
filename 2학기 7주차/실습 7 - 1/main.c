#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int year = 0;
	char Year = 0;

	printf("연도를 입력 : ");
	scanf("%d", &year);

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ?
		"윤년" : "윤년이 아니야";
	/*출력문으로 해야 됨*/


	return 0;
}