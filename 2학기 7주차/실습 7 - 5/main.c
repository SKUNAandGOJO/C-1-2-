#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &a1, &a2, &a3);

	printf("�ִ밪 : %d\n", (a1 > a2) ? (a1 > a3) ? a1 : a3 : (a2 > a3) ? a2 : a3);
	printf("�߰��� : %d\n", (a1 > a2) ? ((a1 > a3) ? ((a2 > a3) ? a2 : a3) : a1) : ((a2 > a3) ? ((a1 > a3) ? a1 : a3) : a2));
	printf("�ּҰ� : %d\n", (a1 < a2) ? (a1 < a3) ? a1 : a3 : (a2 < a3) ? a2 : a3);


	return 0;
}