#include<stdio.h>
void fibonacci(int n)
{
	int i,a[50];
	a[0] = 0;
	a[1] = 1;
	printf("%d %d ",a[0],a[1]);
	for(i=2;i<=n;i++)
	{
		a[i] = a[i-2] + a[i-1];
		printf("%d ",a[i]);	
	}
	
}