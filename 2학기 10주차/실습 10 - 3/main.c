#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int number1 = 0, number2 = 0, number3 = 0;
	int guess1 = 0, guess2 = 0, guess3 = 0;
	int cnt = 1;
	int stk = 0, bl = 0;

	char ch = 0;

	while (1) {
		printf("�����Է� : ");
		scanf("%c", &ch);
		

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'a' || ch == 'A') {
				number1 = rand() % 10;
			printf("%d\n", number1);

			while (number1 != guess1) {
				printf("���� �Է� : ");
				scanf("%d", &guess1);

				if (number1 > guess1) {
					printf("�� ū �����Դϴ�\n");
					cnt++;
				}
				if (number1 < guess1) {
					printf("�� ���� �����Դϴ�\n");
					cnt++;
				}	
			}
			printf("%d�� �õ��� ���� �����Դϴ�\n", cnt);

			system("pause");
			system("cls");
		}
		else if (ch == 'b' || ch == 'B') {
				
			srand(time(NULL));
			do
			{
				number1 = rand() % 10;
				number2 = rand() % 10;
			} while (number1 == number2);
				printf("%d %d\n", number1, number2);

			while (stk != 2) {
				printf("���� �Է� : ");
				scanf("%d %d", &guess1, &guess2);

				if (number1 == guess1) { stk++; }
				if (number2 == guess2) { stk++; }

				if (number1 == guess2) { bl++; }
				if (number2 == guess1) { bl++; }

				printf("%d ��Ʈ����ũ %d ��\n", stk, bl);
			}

			system("pause");
			system("cls");
		}
		else if (ch == 'c' || ch == 'C') {

			srand(time(NULL));
			for (;;) {
				number1 = rand() % 10;
				number2 = rand() % 10;
				number3 = rand() % 10;

				if (number1 != number2 && number2 != number3 && number1 != number3) break;
			}
			printf("%d %d %d\n", number1, number2, number3);

			while (stk != 3) {
				printf("���� �Է� : ");
				scanf("%d %d %d", &guess1, &guess2, &guess3);

				if (number1 == guess1) { stk++; }
				if (number2 == guess2) { stk++; }
				if (number3 == guess3) { stk++; }

				if (number1 == guess2 || number1 == number3) { bl++; }
				if (number2 == guess1 || number2 == guess3) { bl++; }
				if (number3 == guess1 ) { bl++; }

				printf("%d ��Ʈ����ũ %d ��\n", stk, bl);
			}

			system("pause");
			system("cls");
		}
		else {
			printf("�ٽ� �Է�");

			system("pause");
			system("cls");
		}
		getchar();
	}

	return 0;
}