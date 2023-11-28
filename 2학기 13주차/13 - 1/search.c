#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void search(int* bp, int s, int key) { 
	int low = 0, high = s-1, mid = 0, count = 0;

	while (low <= high) {
		count++;
		mid = (low+high) / 2;

		printf("%d번째 시도 결과 : [시작 : %d, 종료 : %d, 중간 : %d]\n", count, low, high, mid);

		if (key == bp[mid]) {
			printf("탐색 성공, key값 %d는 배열 인덱스 %d번째 있습니다.\n", key, mid);
			exit(0);
		}
		else if (key > bp[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

}