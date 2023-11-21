#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

#include "a.h"

int main(void) {
	char key = 0;
	int x = 0;
	int y = 0;

	while (1){
		// 방향키는 아스키 값을 두번 읽어야 한다, 그렇지 않으면 기존 아스키 값과 구별을 못하기 때문이다
		//그래서 방향키 아스키 값 (224)를 먼저 읽고 그 다음 원하는 값을 읽어야 한다.
		gotoxy(x, y);
		printf("@");

		if (kbhit()) { //ke가 눌리면 key의 아스키 코드 값 반환
			key = getch();
			if (key == 224 || key == 0) { // 특수 키인 지 판별
				key = getch();

				switch (key) {
				case 72:
					y--;
					break;

				case 75:
					x--;
					break;

				case 77:
					x++;
					break;

				case 80:
					y++;
					break;
				}
			}
		}

	}

	return 0;
}