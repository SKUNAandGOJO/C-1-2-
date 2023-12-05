#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void search(int* d, int S, int a) {
    int low = 0;
    int high = 0;
    int mid = 0;
    int cnt = 1;


    low = 0;
    high = S - 1;
    while (low <= high) {
        mid = (low + high) / 2;

        printf("%d번째 시도결과 : [시작 : %d, 종료 : %d, 중간 : %d]\n", cnt, low, high, mid);
        cnt++;

        if (a == d[mid]) { 
            printf("탐색성공, key값 %d는 배열 %d번째에 있습니다.\n", a, mid);
            exit(0);
        }
        else if (a < d[mid]) {        
            high = mid - 1;

        }
        else if (a > d[mid]) {        
            low = mid + 1;
        }

    }                            
}


