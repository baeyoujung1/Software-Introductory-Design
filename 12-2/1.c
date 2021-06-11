#include <stdio.h>

void swap(const char** pstr1, const char** pstr2) {
    const char* temp = *pstr1;
    *pstr1 = *pstr2;
    *pstr2 = temp;
}

void printArray(char** arr, int len) {
    printf("Array ");
    for (int i = 0; i < len; i++) {
        printf("[%d]:%s, ", i, arr[i]);
    }
    printf("\n");
}

int main(void) {
    const char* strarr[] = { "aaa", "bbb" };

    printArray((char**)strarr, 2);

    swap(&strarr[0], &strarr[1]);

    printArray((char**)strarr, 2);

    return 0;
}