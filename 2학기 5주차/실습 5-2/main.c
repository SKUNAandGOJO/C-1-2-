#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int number = 0;

	printf("���� �Է� :");
	scanf("%d", &number);

	printf("�Էµ� ������ : %d\n", number);
	printf("�Էµ� �������� char�� ��ȯ���� �� : %d\n", (char)number);
	printf("�Էµ� �������� �����÷ο찡 �� ����: %d\n",number - CHAR_MAX);
	printf("�Էµ� �������� ����÷ο찡 �� ���� : %d\n", CHAR_MIN - number);

	system("pause");
	system("cls");

	/*printf("%d, %d, %d, %d, %d", 'H', 'E', 'L', 'L', 'O');*/

	int ary[5] = { 0 };
	int a = 0;

	printf("���� �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++) {
		
		scanf("%d", &a);

		ary[i] = a;
	}

	for (int i = 0; i < 5; i++) {
		printf("%c", ary[i]);

	}
	printf("\n");
	return 0;
}