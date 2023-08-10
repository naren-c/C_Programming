#include<stdio.h>
#include "factorial.h"
int main()
{
	int num,factorial,n,r,comb;
	printf("Enter a number ");
	scanf("%d",&num);
	factorial = fact(num);
	printf("The factorial of %d is %d ",num,factorial);
	printf("\nEnter n and r for C(n,r) in the respective order ");
	scanf("%d %d",&n,&r);
	comb = combination(n,r);
	printf("The combination is %d ",comb);
	return 0; 
}
