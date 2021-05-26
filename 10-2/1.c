#include <stdio.h>
#include <string.h>

int pali(char *arr) {
	int j = strlen(arr);
	for (int i = 0; i <= j/2; i++) {
		if (arr[i] != arr[j - i-1]) {
			return 1;
		}
	}
	return 0;
}
int main() {
	char arr[20];
	scanf("%s", arr);
	int a = pali(arr);
	if (a == 0) {
		printf("This is a palindrome");
	}
	else if (a == 1) {
		printf("This is not a palindrome");
	}
}