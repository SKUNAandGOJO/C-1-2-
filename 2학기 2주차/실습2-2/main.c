#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("3 X 1 = 3\n");
	printf("3 X 2 = 6\n");
	printf("3 X 3 = 9\n");
	printf("%d X %d = %2d\n", 3, 4, 12);
	printf("%d X %d = %2d\n", 3, 5, 15);
	printf("%d X %d = %2d\n", 3, 6, 18);
	printf("%d X %d = %2d\n", 3, 7, 21);
	printf("%d X %d = %2d\n", 3, 8, 24);
	printf("%d X %d = %2d\n", 3, 9, 27);

	system("pause");
	system("cls");

	for (int gob = 1; gob <= 9; gob++) {
		printf("%d X %d = %2d\n", 3, gob, 3 * gob);
	}

	system("pause");
	system("cls");

	

	// Ű����κ��� ���� �Է¹޾� �Է¹��� ���� �Ųٷ� ���
	// 5 ==> 5 * 9 = 45 ~ 5 * 1 = 5
	
	int dan = 0;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &dan);

	for (int gob = 9; gob >= 1; gob--) {
		printf("%d X %d = %2d\n", dan, gob, dan * gob);
	}



	return 0;
}