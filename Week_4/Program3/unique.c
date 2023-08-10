#include<stdio.h>
int unique(int a[], int n)
{
	int b[100],i,count,j,flag;
	b[0]=a[0];
	count = 1;
	for(i=1;i<n;i++)
	{ 
        flag = 0; 
		for(j=0;j<count;j++)
		{
			if(a[i]!=b[j])
				continue;
			else 
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			b[count] = a[i];
			count++;
		}
	}
	printf("The unique elements in the array is ");
	for(j=0;j<count;j++)
		printf("%d ",b[j]);
				
}