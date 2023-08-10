#include <stdio.h>

void reverse(int a[], int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);	
	}
}
void reverse1(int *a, int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(a+i));	
	}
}