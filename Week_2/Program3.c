#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,pos,pset,n1,cbit,n2;
	printf("Enter the number which you want to check ");
	scanf("%d",&n);
	n2 == n;
	printf("Enter the bit position, to check whether bit position is set or not(starts from 0) ");
	scanf("%d",&pos);
	n1 =  n>>(pos-1);
	if(n1&1==1)
		printf("Bit position is set\n");
	else
		printf("Bit position is not set\n");
	printf("Enter the bit position, which you want to set ");
	scanf("%d",&pset);
	n = n|(1<<pset);
	printf("The number after set is %d\n",n);
	printf("Enter the bit position, which bit you want to clear ");
	scanf("%d",&cbit);
	n = n&~(1<<cbit);
	printf("The number after clear is %d",n);
	return 0;
}
