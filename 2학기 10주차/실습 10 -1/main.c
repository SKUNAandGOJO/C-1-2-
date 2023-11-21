#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int num = 0;
	
	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &num);

		if (num == 4) {
			exit(0);
		}
		else if (num == 1) {
            int a = 24;

            for (int i = 'A'; i <= 'Z'; i++) {
                for (int j = 'A'; j <= i; j++) {
                    printf("%c", j);
                }
                for (int k = ('Z' - i) * 2; k >= 1; k--) {
                    printf(" ");
                }
                for (int l = 'Y' - a; l >= 'A'; l--) {
                    printf("%c", l);
                }
                printf("\n");
                a--;
            }

            int b = 24;

            for (int i = 'Z'; i >= 'A'; i--) {
                for (int j = 'A'; j < i; j++) {
                    printf("%c", j);
                }
                for (int k = 1; k <= (('Z' - i) * 2) + 2; k++) {
                    printf(" ");
                }
                for (int k = 'A' + b; k >= 'A'; k--) {
                    printf("%c", k);
                }
                b--;

                printf("\n");
            }
            system("pause");
            system("cls");
		}
        else if (num == 2){
            int c = 0;
            int cnt = 0;
            int cnt2 = 0;

            printf("나비모양 정수 입력 : ");
            scanf("%d", &c);
            int cc = c;

            for (int i1 = 1;i1 <= c;i1++) {
                cnt = cnt + 1;
                cnt2 = cnt2 + 1;
            }

            for (int i = 1; i <= c; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("%d", j);
                }
                for (int k = (c - i) ; k >= 1; k--) {
                    printf("  ");
                }
                for (int l = (c+1) - cnt; l >= 1; l--) {
                    printf("%d", l);
                }
                printf("\n");
                cnt--;
            }

            

            for (int i = cc; i >= 1; i--) {
                for (int j = 1; j < i; j++) {
                    printf("%d", j);
                }
                for (int k = 1; k <= (cc - i) + 1; k++) {
                    printf("  ");
                }
                for (int k = cnt2-1; k >= 1; k--) {
                    printf("%d", k);
                }
                cnt2--;

                printf("\n");
            }
            system("pause");
            system("cls");
        }
        else if (num == 3) {
            char c = 0;
            int cnt = 0;
            int cnt2 = 0;

            printf("나비모양 문자 입력 : ");
            getchar();
            scanf("%c", &c);
            int cc = c;

            for (int i1 = 'A';i1 <= c;i1++) {
                cnt = cnt + 1;
                cnt2 = cnt2 + 1;
            }

            for (int i = 'A'; i <= c; i++) {
                for (int j = 'A'; j <= i; j++) {
                    printf("%c", j);
                }
                for (int k = (c - i); k >= 'A'; k--) {
                    printf("  ");
                }
                for (int l = (c - 1) - cnt; l >= 'A'; l--) {
                    printf("%c", l);
                }
                printf("\n");
                cnt--;
            }



            for (int i = cc; i >= 'A'; i--) {
                for (int j = 'A'; j < i; j++) {
                    printf("%c", j);
                }
                for (int k = 'A'; k <= (cc - i) + 1; k++) {
                    printf("  ");
                }
                for (int k = cnt2 - 1; k >= 'A'; k--) {
                    printf("%c", k);
                }
                cnt2--;

                printf("\n");
            }
            system("pause");
            system("cls");
        }
        else {
            printf("다시 입력");

            system("pause");
            system("cls");
        }
	}
	
	return 0;
}