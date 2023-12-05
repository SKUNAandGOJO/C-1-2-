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

        printf("%d��° �õ���� : [���� : %d, ���� : %d, �߰� : %d]\n", cnt, low, high, mid);
        cnt++;

        if (a == d[mid]) { 
            printf("Ž������, key�� %d�� �迭 %d��°�� �ֽ��ϴ�.\n", a, mid);
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


