#include<stdio.h>
#include<conio.h>

int series(int n);
int fact(int n);

int main()
{
	int n,s;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	s = series(n);
	printf("The sum of series is %d",s);
	return 0;
}
int series(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum = sum + (fact(i))/i;
	}
	return sum;
}
int fact(int n)
{
	int i,factorial=1;
	for(i=n;i>0;i--)
	{
		factorial = factorial*i;
	}
	return factorial;
}