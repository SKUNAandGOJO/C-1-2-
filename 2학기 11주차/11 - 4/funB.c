#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

int funB() {
	int key = 0;
	int x = 10;
	int y = 10;

	while (1) {
		
		gotoxy(x, y);
		printf("@");	// ����Ű�� �ƽ�Ű ���� �ι� �о�� �Ѵ�, �׷��� ������ ���� �ƽ�Ű ���� ������ ���ϱ� �����̴�
						//�׷��� ����Ű �ƽ�Ű �� (224)�� ���� �а� �� ���� ���ϴ� ���� �о�� �Ѵ�.
	

		  //ke�� ������ key�� �ƽ�Ű �ڵ� �� ��ȯ
		if (kbhit()) {
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
				system("cls");
			}
		}
			

	}

	return 0;
}