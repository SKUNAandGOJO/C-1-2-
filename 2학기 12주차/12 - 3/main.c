#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>
#include <time.h>

#include "my_head.h"

int superid = 1234;
int superpasswd = 5678;
int cnt = 0;

int main(void) {
	int id = 0, passwd =0;
	

	while (1)
	{

		printf("아이디 : ___\b\b\b\b");
		scanf("%d", &id);
		printf("패스워드 : ____\b\b\b");
		scanf("%d", &passwd);

		if (check(id, passwd)==1){
			printf("로그인 성공");
			exit(0);
		}
		

		system("pause");
		system("cls");
	}
	return 0;
}