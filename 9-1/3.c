#include <stdio.h>

int main() {
	char mjy[15]="";
	int a=0; 
	scanf("%s", &mjy);
	for (int i = 0; mjy[i]!='\0'; i++) {
		a = a + 1;
	}
	printf("%d\n", a);
	return 0;
}