#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

#include "a.h"

int main(void) {
	char ch = 0;

	while (1) {
		printf("���� �Է� : ");
		scanf("%c", &ch);

		
		switch (ch) {
		case 'q': case 'Q':
			printf("���α׷� ����");
			exit(0);
			break;
		case 'a': case 'A':
			funA();
			break;
		case 'b': case 'B':
			funB();
			break;
		default :
			printf("�ٽ� �Է� : ");
		}
		getchar();

		system("pause");
		system("cls");

	
	}
	return 0;
}