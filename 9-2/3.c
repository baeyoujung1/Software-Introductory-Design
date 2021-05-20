#include <stdio.h>
#pragma warning(disable: 4996)

#include <stdio.h>
int main() {
    double arr[5];
    double a = 0;
    scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    double* parr = arr;
    for (int i = 0; i <= 4; i++) {
        *(parr + i) = 2 * *(parr + i);
        printf("%lf\n", *(parr+i));
        a = a + *(parr+i);
    }
    printf("sum: %lf\n", a);
    return 0;
}