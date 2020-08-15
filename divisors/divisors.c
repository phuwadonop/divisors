#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int findDvs();
int main() {
    int n, dvs = 0, trinum = 1;
    scanf("%d", &n);
    if (n == 1) printf("%d", trinum);
    else {
        for (int i = 2; ;i++) {
            trinum += i;
            if (findDvs(trinum) > n) break;
        }
        printf("%d", trinum);
    }
}
int findDvs(int x) {
    int div = 2, dvs = 1;
    int y;
    while (1) {
        if (x % div != 0) div += 1;
        else {
            dvs += 1;
            y = x / div;
            if (y == 1) break;
            div += 1;
        }
    }
    return dvs;
}
