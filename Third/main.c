#include <stdio.h>

int main(void) {
	// print + formatted (서식화된)
	printf("이름 : %s \n", "나건우"); // %s (string, 문자열)
	printf("나이 : %d \n", 20);  // %d (decimal, 10진수)
	printf("성별 : %c \n", 'M'); //%c (chracter, 한문자)
	printf("키 : %lf \n", 179.0); //%lf (long float, 실수)

	

	return 0;
}