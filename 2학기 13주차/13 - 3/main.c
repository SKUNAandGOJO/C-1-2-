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
		printf("�¼��� �����Ͻðڽ��ϱ�? : ");
		scanf("%c", &answer);

		if (answer == 'y'|| answer == 'Y') {
				display(seat, SIZE);
				printf("���° �¼��� �����Ͻðڽ��ϱ�? : ");
				scanf("%d", &num);

				if (seat[num - 1] == 0) {
					seat[num - 1] = 1;
					printf("%d ��° �¼��� ����Ǿ����ϴ�.\n", num);
					display(seat, SIZE);
				}
				else {
					printf("�̹� ����Ǿ� �ֽ��ϴ�.\n");
				}
		}
		else if (answer == 'n' || answer == 'N') {
			printf("���α׷��� �����մϴ�.\n");
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