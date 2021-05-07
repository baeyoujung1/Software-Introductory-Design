#include <stdio.h>

int dhg(int n){
	if(n==1)
		return 1;
	else
		return n+dhg(n-1);
}

int main(void){
    int n;
	scanf("%d",&n);
	printf("%d\n",dhg(n));
	return 0;
}
