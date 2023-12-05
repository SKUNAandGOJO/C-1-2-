#include "myheader.h"

int main(void) {
	int data[SIZE] = { 0, };
	int key = 0;

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		data[i] = rand() % 99 + 1;
	}
	display("정렬 전 배열 값 : ", data, SIZE);

	sort(data, SIZE);

	printf("탐색할 값을 입력 : ");
	scanf("%d", &key);
	search(data, SIZE, key);

	return 0;
	
}