#include<stdio.h>
#include "unique.h"
int main()
{
	int a[100],i,n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	unique(a,n);
	return 0;	
}
