#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <windows.h>

#include "game1.c"
//#include "game2.c"
//#include "game3.c"

int main(void) {
	int user = 0; 
	while (1)
	{
		printf("�ո�(0) or �޸�(1) �Է� : ");
		scanf("%d", &user);

		if (user == 4)
		{
			printf("���α׷� ����\n");
			exit(0);
		}
		else if (user == 0 || user == 1){
			game1(user);
		}
		else if (user == 2){
			game2();

		}
		else if (user == 3) {
			game3();

		}
		else  {
			printf("�ٽ� �Է�\n");

		}
		system("pause");
		system("cls");
		

	}

	return 0;
}