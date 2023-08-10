#include<stdio.h>
#include<conio.h>

int main()
{
	int a[50][50],n,m;
	printf("Enter the value of m ");
	scanf("%d",&m);
	printf("Enter the value of n ");
	scanf("%d",&n);
	printf("Enter the elements of the %dx%d matrix ",m,n);
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int r,c,b[50][50];
	for(r=1;r<=m;r++)
	{
		for(c=1;c<=n;c++)
		{
			b[c][r] = a[r][c];
		}
	}
	int isSymmetric = 1;
	for(i=1,r=1;i<=m,r<=m;i++,r++)
	{
		for(j=1,c=1;j<=n,c<=n;j++,c++)
		{
			if(a[i][j] == b[r][c])
				continue;
			else
			{
				isSymmetric = 0;
				break;
			}
		}
	}
	if(isSymmetric)
		printf("The matrix is symmetric ");
	else
		printf("The matrix is not symmetric ");
	return 0;
}
