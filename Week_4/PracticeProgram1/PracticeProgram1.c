#include<stdio.h>
#include<conio.h>
int maximum(int a[],int n);
int minimum(int a[],int n);
int main()
{
	int min,max,a[50],i,n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max = maximum(a,n);
	min = minimum(a,n);
	printf("The maximum and minimum of the given array is %d and %d respectively",max,min);
	return 0;
}
int maximum(int a[],int n)
{
	int i,max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	return max;	
}
int minimum(int a[],int n)
{
	int i,min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];
	}
	return min;	
}