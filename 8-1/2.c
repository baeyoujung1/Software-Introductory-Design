#include <stdio.h>

int gMul=1;

int addTotal(int n){
	int a=0;
	for(int i=1; i<=n; i++) {
		a=a+i;
	}
	return a;
}

void mulTotal(int n){
	for(int i=1; i<=n; i++) {
		gMul=gMul*i;
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	mulTotal(n);
	printf("addTotal(): %d\n",addTotal(n));
	printf("gMul: %d\n", gMul);
	return 0;
}
