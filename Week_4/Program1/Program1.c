#include<stdio.h>
#include "reverse.h"
int main()
{
	int a[100],i,n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe reversed array using index is ");
	reverse(a,n);
	printf("\nThe reversed array using pointers is ");
	reverse1(a,n);
	return 0;
}

