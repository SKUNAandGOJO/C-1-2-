#include<stdio.h>
#include<stdlib.h> // system()


int main(void) {
	printf("��  �� : %s\n", "���ǿ�");
	printf("��  �� : %6d\n", 20);
	printf("������ : %.1lf\n", 78.8);
	printf("��  �� : %c\n", 'M');
	printf("��  �� : %s\n", "���η� 26�ȱ� 7");

	system("pause");
	system("cls"); //cls : clear screen

	char name[20] = "���Ǿ�";
	int age = 22;
	double weight = 78.0;
	char gender = 'N';
	char address[50] = "�뱸������ �޼���";
	// ������ �̿��ؼ� ���

	printf("��  �� : %s\n", name);
	printf("��  �� : %6d\n", age);
	printf("������ : %.1lf\n", weight);
	printf("��  �� : %5c\n", gender);
	printf("��  �� : %s\n", address);

	system("pause");
	system("cls");


	printf("�̸� �Է��ض� : ");
	scanf("%s", name);  // �迭�̸��� �� ��ü�� �ּ�

	printf("���� �Է��ض� : ");
	scanf("%d", &age); //�����̸� �տ��� �ּҿ����� ���
	
	printf("������ �Է��ض� : ");
	scanf("%lf", &weight);

	
	printf("���� �Է��ض� : ");
	// ����Ű ���ִ� ��
	//1. scanf("%*c");
	//2. scanf(" %c", &gender);
	/* 3.*/ getchar();
	scanf("%c", &gender);

	printf("�ּ� �Է��ض� : ");
	getchar();
	gets(address);
	// �ٸ� ��� scanf("%[^\n]s", address);

	printf("��  �� : %s\n", name);
	printf("��  �� : %6d\n", age);
	printf("������ : %.3lf\n", weight);
	printf("��  �� : %6c\n", gender);
	printf("��  �� : %s\n", address);

	return 0;
}