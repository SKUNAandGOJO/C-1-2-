#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int jung = 0;
	int ary[3] = { 0 };
	int a = 0;


	while (1) {
		printf("����(ch) �Է� : ");
		scanf("%c", &ch);
		getchar();
		

		if (ch == 'q' || ch == 'Q') {
			exit(0);
		}
		else if (ch == 'i' || ch == 'I') {
			printf("������ �Է��ϼ��� : ");
			scanf("%d", &jung);

			if (jung > CHAR_MAX) {
				printf("%d ==> �����÷ο찡 �� �� %d :: �ʰ��� ��ġ %d\n", jung, (char)jung, jung - CHAR_MAX);
				getchar();
			}
			else if (jung < CHAR_MIN) {
			printf("%d ==> ����÷ο찡 �� �� %d :: �ʰ��� ��ġ %d\n", jung, (char)jung, CHAR_MIN - jung);
			    getchar();
		    }
			else {
				printf("%d �� ���������� ��ȯ�� �� : %c\n", jung, jung);
				getchar();
			}

			system("pause");
			system("cls");

		}
		else if (ch == 'c' || ch == 'C') {
			printf("%d %d %d", 'n', 'g', 'w');

			printf("���� �Է��ϼ��� : ");
			for (int i = 0; i <= 4; i++) {

				scanf("%d", &a);

				ary[i] = a;
			}

			for (int i = 0; i <= 4; i++) {
				printf("%c", ary[i]);

			}

			system("pause");
			system("cls");

		}
		
		else {
			printf("�ٽ� �Է��ض� �����̾�");

			system("pause");
			system("cls");
		}
	}

	return 0;
}