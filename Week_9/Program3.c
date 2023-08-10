#include<stdio.h>
int main()
{
	int num, arr_ele[20],i,j,element;
	printf("Enter the number of elements you want to sort ");
	scanf("%d",&num);
	printf("Enter the %d elements ",num);
	for(i=0;i<num;i++)
		scanf("%d",&arr_ele[i]);
	printf("Before sorting");
	for(i=0;i<num;i++)
		printf(" %d",arr_ele[i]);
	for(i=1;i<num;i++)
	{
		element = arr_ele[i];
		j = i-1;
		while(j>=0 && arr_ele[j]>element)
		{
			arr_ele[j+1] = arr_ele[j];
			j = j-1;
		}
		arr_ele[j+1] = element;
	}
	printf("\nAfter sorting ");
	for(i=0;i<num;i++)
		printf("%d ",arr_ele[i]);	
	
	return 0;
}