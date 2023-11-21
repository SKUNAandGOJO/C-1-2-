#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
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

    return 0;
}