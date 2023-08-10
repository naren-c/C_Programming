#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("Program for Multiplication Table\n");
	printf("Which number multiplication table you want to generate: \n");
	scanf("%d",&n);
	printf("How many number of multiples \n");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		x = n*j;
		printf("%d*%d= %d \n",n,j,x);
	}
	int k,lines,nstars;
	printf("How many lines do you want the pattern to be printed? ");
	scanf("%d",&lines);
	for(k=1;k<=lines;k++)
	{
		for(nstars=1;nstars<=k;nstars++)
			{
				printf("* ");
			}
		printf("\n");
	}
	return 0;
}
