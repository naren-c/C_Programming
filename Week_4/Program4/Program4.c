#include<stdio.h>
#include "p.h"
int main()
{
	int base,pow,p;
	printf("Enter the base and power ");
	scanf("%d %d",&base,&pow);
	p = power(base,pow);
	printf("The power of %d^%d is %d ",base,pow,p);
	return 0;
}
