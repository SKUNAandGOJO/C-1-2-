#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int a = 0;


	printf("���� �Է� : ");
	scanf("%d", &a);

	printf("3�� ������� 4�� ����� �� || 3�� ������� 4�� ����� �ƴ� ��");

	for (int i = 0; i < a + 1; i++) {
		(i % 3 == 0) && (i % 4 == 0) ?
				printf("%d\n", i) :
				printf("\t\t\t\t %d\n", i);
	}
	

	return 0;
}