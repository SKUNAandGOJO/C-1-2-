#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

#include "a.h"

int main(void) {
	int x = 10;
	int y = 10;
	char key = 0;

	while (1){
		gotoxy(x, y);
		printf("$");

		key = getch(); // getchar()과 달리 비표준함수이다, 그에 따라 반대로 버퍼를 사용하지 않는다

		switch (key){
			case 'w':
				if (y > 0)
				y--;
				break;
			case 's':
				if (y < 30)
				y++;
				break;
			case 'a':
				if (x > 0)
				x--;
				break;
			case 'd':
				if (x < 80)
				x++;
				break;

		}
		/*system("cls");*/
	}

	return 0;
}