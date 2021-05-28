#include <stdio.h>

void square(double *p1) {
	*p1 = *p1 * *p1;
}
int main() {
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%lf", dvar);
	return 0;
}
 