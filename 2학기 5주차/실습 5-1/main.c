#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	//printf("�������� �ڷ����� �ּڰ� : %d\n", CHAR_MIN);
	//printf("�������� �ڷ����� �ִ� : %d\n", CHAR_MAX);
	//printf("����ε� �������� �ڷ����� �ִ� : %d\n", UCHAR_MAX);

	//system("pause");
	//system("cls");

	char ch = 0;

	while (1) {
		printf("����(ch) �Է� : ");
		scanf("%c", &ch);
		getchar();

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'c' || ch == 'C') {
			printf("�������� �ڷ����� �ּڰ� : %d\n", CHAR_MIN);
			printf("�������� �ڷ����� �ִ� : %d\n", CHAR_MAX);
			printf("����ε� �������� �ڷ����� �ִ� : %d\n", UCHAR_MAX);

			system("pause");
			system("cls");
			
		}
		else if (ch == 'i' || ch == 'I') {
			printf("�������� �������� �ּڰ� : %d\n", INT_MIN);
			printf("�������� �������� �ִ� : %d\n", INT_MAX);
			printf("����ε� �������� �ڷ����� �ִ� : %u\n", UINT_MAX);

			system("pause");
			system("cls");

		}
		else if (ch == 'f' || ch == 'f') {
			printf("�������� �Ǽ�(float)���� �ּڰ� : %.3e\n", FLT_MIN);
			printf("�������� �Ǽ�(float)���� �ִ� : %.3e\n", FLT_MAX);

			system("pause");
			system("cls");
			
		}
		else if (ch == 'd' || ch == 'D') {
			printf("�������� �Ǽ�(double)���� �ּڰ� : %.3e\n", DBL_MIN);
			printf("�������� �Ǽ�(double)���� �ִ� : %.3e\n", DBL_MAX);

			system("pause");
			system("cls");

		}
		else {
			printf("�ٽ� �Է��ض� �����̾�");

			system("pause");
			system("cls");
		}
	}


	return 0;
}