#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	//printf("문자형의 자료형의 최솟값 : %d\n", CHAR_MIN);
	//printf("문자형의 자료형의 최댓값 : %d\n", CHAR_MAX);
	//printf("언사인드 문자형의 자료형의 최댓값 : %d\n", UCHAR_MAX);

	//system("pause");
	//system("cls");

	char ch = 0;

	while (1) {
		printf("문자(ch) 입력 : ");
		scanf("%c", &ch);
		getchar();

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'c' || ch == 'C') {
			printf("문자형의 자료형의 최솟값 : %d\n", CHAR_MIN);
			printf("문자형의 자료형의 최댓값 : %d\n", CHAR_MAX);
			printf("언사인드 문자형의 자료형의 최댓값 : %d\n", UCHAR_MAX);

			system("pause");
			system("cls");
			
		}
		else if (ch == 'i' || ch == 'I') {
			printf("문자형의 정수형의 최솟값 : %d\n", INT_MIN);
			printf("문자형의 정수형의 최댓값 : %d\n", INT_MAX);
			printf("언사인드 문자형의 자료형의 최댓값 : %u\n", UINT_MAX);

			system("pause");
			system("cls");

		}
		else if (ch == 'f' || ch == 'f') {
			printf("문자형의 실수(float)형의 최솟값 : %.3e\n", FLT_MIN);
			printf("문자형의 실수(float)형의 최댓값 : %.3e\n", FLT_MAX);

			system("pause");
			system("cls");
			
		}
		else if (ch == 'd' || ch == 'D') {
			printf("문자형의 실수(double)형의 최솟값 : %.3e\n", DBL_MIN);
			printf("문자형의 실수(double)형의 최댓값 : %.3e\n", DBL_MAX);

			system("pause");
			system("cls");

		}
		else {
			printf("다시 입력해라 개새이야");

			system("pause");
			system("cls");
		}
	}


	return 0;
}