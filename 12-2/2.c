#include <stdio.h>
#include <string.h>

int main(void) {
    char en1[10][20];
    int asd = 0;
    int valid1 = 0;
    char en2[20] = "";
    int valid2 = 0;

    while (1) {
        if (asd < 10) {
            printf("Enter a word (Enter 'end' to quit): ");
            scanf("%s", en1[asd]);


            if (strcmp(en1[asd], "end") == 0) {
                printf("%d words in the list:\n", asd);
                for (int i = 0; i < asd; i++) {
                    printf("%s ", en1[i]);
                }
                printf("\n");
                break;
            }

            else if (strcmp(en1[asd], "end") != 0) {
                valid1 = 1;
                for (int i = 0; i < asd; i++) {
                    if (strcmp(en1[i], en1[asd]) == 0) {
                        printf("This word already exists. Please enter another word.\n");
                        valid1 = 0;
                    }
                }
            }
            if (valid1) {
                asd = asd + 1;
            }
        }

        if (asd == 10) {
            printf("%d words in the list:\n", asd);
            for (int i = 0; i < asd; i++) {
                printf("%s ", en1[i]);
            }
            printf("\n");
            break;
        }
    }
    while (1) {
        printf("Enter a word to search (Enter 'end' to quit): ");
        scanf("%s", en2);

        if (strcmp(en2, "end") == 0) {
            break;
        }

        else if (strcmp(en2, "end") != 0) {
            for (int i = 0; i < asd; i++) {
                if (strcmp(en2, en1[i]) == 0) {
                    valid2 = 1;
                    break;
                }
                else if (strcmp(en2, en1[i]) != 0) {
                    valid2 = 0;
                }
            }

            if (valid2 == 1) {
                printf("This word is in the list.\n");
            }

            else if (valid2 == 0) {
                printf("This word is NOT in the list.\n");
            }
        }
    }

    return 0;
}