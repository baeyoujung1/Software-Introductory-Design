#include <stdio.h>

void printLine(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n");
}
int main() {
	int a;
	scanf("%d", &a);
	for (int j = 1; j <= a; j++) {
		printLine(j);
	}
	for (int j = a; j > 0; j--) {
		printLine(j);
	}
}