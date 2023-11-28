#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

void sort(int* bp, int s) { //bp == data, s == SIZE == 10
	int least = 0, temp = 0;
	printf("sort 함수에서 배열 값 : \n");
	for  (int i = 0; i < s;i++){
		printf("%d ", bp[i]);
	}
	printf("\n");

	for (int i = 0; i < s - 1; i++)
	{
		least = i;
		for (int j = i + 1; j < s; j++)
		{
			if (bp[j] < bp[least])
			{
				least = j;
			}
		}
		temp = bp[i];
		bp[i] = bp[least];
		bp[least] = temp;
	}
	printf("정렬 후 배열 값 : ");
	for (int i = 0; i < s; i++)
	{
		printf("%d ", bp[i]);		// bp[0] == data[0], bp[i] == data[i], ~~
	}
	printf("\n");
}