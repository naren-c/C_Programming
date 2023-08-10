#include<stdio.h>
#include<conio.h>

void armstrong(int num);
void perfectNumber(int num);

int main()
{
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	armstrong(num);
	perfectNumber(num);
	return 0;
}
void armstrong(int num)
{
	int r,temp,sum=0;
	temp = num;
	while(num>=1)
	{
		r = num%10;
		sum = sum + (r*r*r);
		num = num/10;
	}
	if(temp==sum)
		printf("The number %d is an Armstrong number \n",temp);
	else
		printf("The number %d is not an Armstrong number \n",temp);
}
void perfectNumber(int num)
{
	int sum=0,i,temp;
	temp = num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum +i;
	}
	if(temp == sum)
		printf("The number %d is a perfect number ",temp);
	else
		printf("The number %d is not a perfect number ",temp);
}
	
	