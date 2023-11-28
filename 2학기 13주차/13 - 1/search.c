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

		printf("%d��° �õ� ��� : [���� : %d, ���� : %d, �߰� : %d]\n", count, low, high, mid);

		if (key == bp[mid]) {
			printf("Ž�� ����, key�� %d�� �迭 �ε��� %d��° �ֽ��ϴ�.\n", key, mid);
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