#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>
#define SIZE 10

#include "myhead.h"

int main(void) {
	int seat[SIZE] = { 0 };
	int num = 0;
	int num2 = 0;
	char answer = 0;
	

	while (1){
		printf("좌석을 예약하시겠습니까? : ");
		scanf("%c", &answer);

		if (answer == 'y'|| answer == 'Y') {
				display(seat, SIZE);
				printf("몇번째 좌석을 예약하시겠습니까? : ");
				scanf("%d", &num);

				if (seat[num - 1] == 0) {
					seat[num - 1] = 1;
					printf("%d 번째 좌석이 예약되었습니다.\n", num);
					display(seat, SIZE);
				}
				else {
					printf("이미 예약되어 있습니다.\n");
				}
		}
		else if (answer == 'n' || answer == 'N') {
			printf("프로그램을 종료합니다.\n");
			exit(0);
		}
		else if (answer == 't' || answer == 'T') {
			funcA(seat, SIZE);
		}

		getchar();
		system("pause");
		system("cls");

	}

	return 0;
}