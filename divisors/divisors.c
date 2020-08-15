#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n;
    int divisors = 0;
    int trinumber = 0;
    short checkpoint = 0;
    for (int i = 1; i <= n; i++) {
        trinumber += i;
        int div = 2;
        while (1)
        {
            int x = trinumber;
            if (x % div != 0) {
                div += 1;
            }
            else {
                x = x / div;
                divisors += 1;
                if (divisors == 500 - 1) checkpoint = 1; break;
                if (x == 1) break;
                div += 1;

            }
        }
        if (checkpoint == 1) break;
    }
    printf("%d", trinumber);
}