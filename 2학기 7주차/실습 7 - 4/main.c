#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	char ch = 0;
	int a = 0;
	int S3 = 0;
	int S4 = 0;

	while (1) {
		printf("����(ch) �Է� : ");
		scanf("%c", &ch);
		

		if (ch == 'q' || ch == 'Q'){
			exit(0);
		}
		else if (ch == 'i' || ch == 'I') {
			printf("���� �Է� :");
			scanf("%d", &a);

			printf("3�� ����� || 4�� �����\n\n");

			for (int i = 0; i < a + 1; i++) {
			
				if (i % 3 == 0) {
					if (i % 12 == 0) {
						printf("\n");
						continue;
					}
					S3 = S3 + i;
					printf("%d�� �� 3�� ����� : %d\t\t", i, S3);

				}
				else if (i % 4 == 0) {
					if (i % 12 == 0) {
						printf("\n");
						continue;
					}
					S4 = S4 + i;
					printf("%d�� �� 4�� ����� : %d\n", i, S4);
				}
				
			}
			
			

		
		}
		else {
			printf("�ٽ� �Է�");

			system("pause");
			system("cls");
		}
	}
	getchar();
	return 0;
}