#include<stdio.h>
#include<conio.h>
void pascaltriangle(int n; int a[][n], int n);
void displaypascal(int n; int a[][n], int n);
int main()
{
	int a[50][50],n;
	printf("Enter the value of n ");
	scanf("%d",&n);
	pascaltriangle(a,n);
	
	return 0;
}
void pascaltriangle(int n; int a[][n], int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i-1][j]+a[i-1][j-1];
			}
		}
	}
	displaypascal(a,n);
}
void displaypascal(int n; int a[][n], int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}