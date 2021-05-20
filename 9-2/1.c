#include <stdio.h>

int main() {
    int by[5];
    scanf("%d %d %d %d %d", &by[0], &by[1], &by[2], &by[3], &by[4]);
    int a = by[0];
    int b = by[0];
    int c = 0;
    for (int i = 0; i <= 4; i++) {
        if (a < by[i]) {
            a = by[i];
        }
        if (b >= by[i]) {
            b = by[i];
        }
        c = c + by[i];
    }
    printf("min: %d\n", b);
    printf("max: %d\n", a);
    printf("sum: %d\n", c);

}