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
		// ����Ű�� �ƽ�Ű ���� �ι� �о�� �Ѵ�, �׷��� ������ ���� �ƽ�Ű ���� ������ ���ϱ� �����̴�
		//�׷��� ����Ű �ƽ�Ű �� (224)�� ���� �а� �� ���� ���ϴ� ���� �о�� �Ѵ�.
		gotoxy(x, y);
		printf("@");

		if (kbhit()) { //ke�� ������ key�� �ƽ�Ű �ڵ� �� ��ȯ
			key = getch();
			if (key == 224 || key == 0) { // Ư�� Ű�� �� �Ǻ�
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