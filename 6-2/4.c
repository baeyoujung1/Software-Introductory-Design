#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,m,n;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		d=a;
		e=b;
	}
	else {
		d=b;
		e=a;
	}
	if (c>d){
		m=c;
	}
	else {
		m=d;
	}
	if (c<e){
		n=c;
	}
	else {
		n=e;
	}
	printf("min: %d\n",n);
	printf("max: %d",m);
