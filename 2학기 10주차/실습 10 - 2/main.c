#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {

	int number1 = 0, number2 = 0;
	int guess1 = 0, guess2 = 0;
	int cnt = 0;
	int stk = 0, bl = 0;

	srand(time(NULL));
	do {
		number1 = rand() % 10;
		number2 = rand() % 10;

	} while (number1 == number2);
	printf("%d , %d\n", number1, number2);

	while (stk != 2) {
		cnt++;
		printf("정수 입력 : ", cnt);
		scanf("%d %d", &guess1, &guess2);

		if (number1 == guess1) { stk++; }
		if (number2 == guess2) { stk++; }

		if (number1 == guess2) { bl++; }
		if (number2 == guess1) { bl++; }

		printf("%d 스트라이크 %d 볼\n", stk, bl);
	}
	

	return 0;
}