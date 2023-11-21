#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

int check(int x, int y) {
	extern int superid;
	extern int superpasswd;
	extern int cnt;

	if (cnt == 3) {
		printf("로그인 시도를 3회 s시도하였습니다.\n");
		exit(0);
	}


	if (x == superid && y == superpasswd) {
		return 1;
	}
	else {
		printf("다시 입력하세요 \n");
		cnt++;
	}
	return 0;

}