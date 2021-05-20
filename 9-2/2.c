#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int arr[5];
    int c = 0;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    int* parr = arr;
    for (int i = 0; i <= 1; i++) {
        int j = 4 - i;
        c = *(parr + i);
        *(parr + i) = *(parr + j);
        *(parr + j)=c;
    }
    for (int i = 0; i <= 4; i++) {
        printf("%d ", *(parr + i));
    }
    return 0;
}