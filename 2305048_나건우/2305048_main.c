#include "myheader.h"

int main(void) {
	int data[SIZE] = { 0, };
	int key = 0;

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		data[i] = rand() % 99 + 1;
	}
	display("���� �� �迭 �� : ", data, SIZE);

	sort(data, SIZE);

	printf("Ž���� ���� �Է� : ");
	scanf("%d", &key);
	search(data, SIZE, key);

	return 0;
	
}