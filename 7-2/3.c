#include <stdio.h>

int main(void) {
	char xy;
	while (1) {
		scanf("%c", &xy);
		if (xy >= 'a' && xy <= 'z') {
			xy = xy - 32;
			printf("%c\n", xy);
		}
		else if (xy >= 'A' && xy <= 'Z') {
			xy = xy + 32;
			printf("%c\n", xy);
		}
		else if (xy >= 48 && xy <= 57) {
			printf("%c\n", xy);
		}
		else if (xy != '\n') {
			printf("exit");
			break;
		}
	}
	return 0;
}
