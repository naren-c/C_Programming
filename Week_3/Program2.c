#include<stdio.h>
#include<conio.h>

int gcd(int num1,int num2);

int main()
{
		int num1,num2,num3,result;
		printf("Enter three numbers to find GCD ");
		scanf("%d%d%d",&num1,&num2,&num3);
		result = gcd(num1,num2);
		result = gcd(num3,result);
		printf("The GCD of three numbers %d, %d and %d is %d ",num1,num2,num3,result);
		return 0;
}

int gcd(int num1,int num2)
{
	while(num1!=num2)
	{
		if(num1>num2)
			num1 = num1-num2;
		else
			num2 = num2-num1;
	}
	return num1;
}
			
