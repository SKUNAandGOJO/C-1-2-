#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

#include "a.h"

int main(void) {
	char ch = 0;

	while (1) {
		printf("문자 입력 : ");
		scanf("%c", &ch);

		
		switch (ch) {
		case 'q': case 'Q':
			printf("프로그램 종료");
			exit(0);
			break;
		case 'a': case 'A':
			funA();
			break;
		case 'b': case 'B':
			funB();
			break;
		default :
			printf("다시 입력 : ");
		}
		getchar();

		system("pause");
		system("cls");

	
	}
	return 0;
}