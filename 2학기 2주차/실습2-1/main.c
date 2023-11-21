#include<stdio.h>
#include<stdlib.h> // system()


int main(void) {
	printf("이  름 : %s\n", "나건우");
	printf("나  이 : %6d\n", 20);
	printf("몸무게 : %.1lf\n", 78.8);
	printf("성  별 : %c\n", 'M');
	printf("주  소 : %s\n", "상인로 26안길 7");

	system("pause");
	system("cls"); //cls : clear screen

	char name[20] = "나건씨";
	int age = 22;
	double weight = 78.0;
	char gender = 'N';
	char address[50] = "대구광역시 달서구";
	// 변수를 이용해서 출력

	printf("이  름 : %s\n", name);
	printf("나  이 : %6d\n", age);
	printf("몸무게 : %.1lf\n", weight);
	printf("성  별 : %5c\n", gender);
	printf("주  소 : %s\n", address);

	system("pause");
	system("cls");


	printf("이름 입력해라 : ");
	scanf("%s", name);  // 배열이름은 그 자체가 주소

	printf("나이 입력해라 : ");
	scanf("%d", &age); //변수이름 앞에선 주소연산자 사용
	
	printf("몸무게 입력해라 : ");
	scanf("%lf", &weight);

	
	printf("성별 입력해라 : ");
	// 엔터키 없애는 법
	//1. scanf("%*c");
	//2. scanf(" %c", &gender);
	/* 3.*/ getchar();
	scanf("%c", &gender);

	printf("주소 입력해라 : ");
	getchar();
	gets(address);
	// 다른 방법 scanf("%[^\n]s", address);

	printf("이  름 : %s\n", name);
	printf("나  이 : %6d\n", age);
	printf("몸무게 : %.3lf\n", weight);
	printf("성  별 : %6c\n", gender);
	printf("주  소 : %s\n", address);

	return 0;
}