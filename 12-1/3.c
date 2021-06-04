#include <stdio.h>

void printString(const char* str) {
    printf("%s\n", str);
}

int main(void) {
    char arr[3][6] = {
            "One",
            "Two",
            "Three"
    };

    void (*ps)();
    ps = printString;
    for (int i = 0; i < 3; i++) {
        ps(arr[i]);
    }

    return 0;
}