#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	double arr[5];
	int a = 0;
	scanf("%d %d %d %d %d", &by[0], &by[1], &by[2], &by[3], &by[4]);
	double* parr = arr;
	for (int i=0;i<=4;i++){
		(*parr + i) = 2 * (*parr + i);
		printf("%lf\n", (*parr));
		a = a + (*parr);
	}
	printf("%d\n", a);
	return 0;
}