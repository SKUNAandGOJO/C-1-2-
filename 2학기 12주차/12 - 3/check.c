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
		printf("�α��� �õ��� 3ȸ s�õ��Ͽ����ϴ�.\n");
		exit(0);
	}


	if (x == superid && y == superpasswd) {
		return 1;
	}
	else {
		printf("�ٽ� �Է��ϼ��� \n");
		cnt++;
	}
	return 0;

}