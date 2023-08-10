#include<stdio.h>
#include<conio.h>

int isPrime(int num);

int main()
{
	int num;
	printf("Enter a number to check prime or not ");
	scanf("%d",&num);
	if(isPrime(num))
		printf("The number %d is a prime ",num);
	else
		printf("The number %d is not a prime ",num);
}
int isPrime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}