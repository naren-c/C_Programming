#include<stdio.h>
#include<conio.h>

int isPrime(int num);
int nextPrime(int num);

int main()
{
	int num,np;
	printf("Enter a number to check prime or not ");
	scanf("%d",&num);
	if(isPrime(num))
		printf("The number %d is a prime ",num);
	else
		printf("The number %d is not a prime ",num);
	np = nextPrime(num);
	printf("\nThe next prime number is %d",np);
	return 0;
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
int nextPrime(int num)
{
	num = num+1;
	while(1)
	{
		if(isPrime(num))
			return num;
		num++;
	}
}