#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int op = 0;
	int num1 = 0;
	int num2 = 0;

	while (1){
		printf("�ѹ���(op) �Է� : ");
		getchar();
		scanf("%c", &op);
		
		if (op == 'q' || op == 'Q') {
			exit(0);
		}
		else if (op == '+') {
			printf("ù�� ° ���� :");
			scanf("%d", num1);
			printf("�ι� ° ���� :");
			scanf("%d", num2);

			printf("%d + %d = %2d\n", num1, num2, num1 + num2);
		
		}
		else if (op == '-') {
			printf("ù�� ° ���� :");
			scanf("%d", num1);
			printf("�ι� ° ���� :");
			scanf("%d", num2);

			printf("%d - %d = %2d\n", num1, num2, num1 - num2);
		}
		else if (op == '*') {
			printf("ù�� ° ���� :");
			scanf("%d", num1);
			printf("�ι� ° ���� :");
			scanf("%d", num2);

			printf("%d * %d = %2d\n", num1, num2, num1 * num2);
		}
		else if (op == '/') {
			printf("ù�� ° ���� :");
			scanf("%d", num1);
			printf("�ι� ° ���� :");
			scanf("%d", num2);

		   printf("%d / %d = %.1lf\n", num1, num2, (double)num1 / num2);
		}
		else {
			printf("�ٽ��Է��ϼ���");
		}

	}
	
	return 0;

}
