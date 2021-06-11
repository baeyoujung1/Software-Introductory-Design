#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    scanf("%d", &num);

    int* pnum;
    pnum = (int*)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        scanf("%d", &pnum[i]);
    }

    int max = pnum[0];
    int min = pnum[0];

    for (int j = 0; j < num; j++) {
        if (pnum[j] > max) {
            max = pnum[j];
        }
        if (pnum[j] < min) {
            min = pnum[j];
        }
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    free(pnum);

    return 0;
}