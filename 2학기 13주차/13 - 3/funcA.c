#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void funcA(int* bp, int s) {
	int num = 0, num2 = 0;

	printf("------------------------------------------------------------------------------\n");
	printf("1	2	3	4	5	6	7	8	9	10\n");
	printf("------------------------------------------------------------------------------\n");
	for (int i = 0; i < s; i++) {
		printf("%d       ", bp[i]);
	}
	printf("\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n");

	printf("몇번째 좌석을 예약하시겠습니까? : ");
	scanf("%d %d", &num, &num2);

	if (bp[num - 1] == 0 && bp[num2 - 1] == 0) {
		bp[num - 1] = 1;
		bp[num2 - 1] = 1;
		printf("%d 번째, %d 번째 좌석이 예약되었습니다.\n", num, num2);

		printf("------------------------------------------------------------------------------\n");
		printf("1	2	3	4	5	6	7	8	9	10\n");
		printf("------------------------------------------------------------------------------\n");
		for (int i = 0; i < s; i++) {
			printf("%d       ", bp[i]);
		}
		printf("\n");
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\n");
	}
	else {
		printf("이미 예약되어 있습니다.\n");
	}
}