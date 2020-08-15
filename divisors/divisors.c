#include<stdio.h>
int main() {
    int div = 2, dvs = 1;
    int x, y;
    scanf("%d", &x);
    while (1) {
        if (x % div != 0) div += 1;
        else {
            y = x;
            y /= div;
            dvs += 1;
            if (x == 1) break;
            div += 1;
        }
    }
    printf("%d", dvs);
}
