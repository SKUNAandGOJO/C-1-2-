#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>
#define SIZE 10

#include "myhead.h"

int main(void) {
	int data[SIZE] = { 0, };
	int key = 0;

	srand(time(NULL));
	printf("���� �� �迭 �� : ");
	for (int i = 0; i < SIZE; i++) {
		data[i] = rand() % 99 + 1;
		printf("%d ", data[i]);
	}
	printf("\n");

	sort(data, SIZE);     //�迭 �̸��� �ּ� ==> ������(�ּҸ� ����)
                          // void sort(int*, int)

	printf("�˻��� �� : ");
	scanf("%d", &key);

	search(data, SIZE, key);     //void search(int*, int, int)
	return 0;
}