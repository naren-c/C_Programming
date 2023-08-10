#include<stdio.h>
#include<conio.h>

void fibonacci(int n);

int main()
{
	int n;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}

void fibonacci(int n)
{
	int i,fib1,fib2,fib;
	fib1 = 0;
	fib2 = 1;
	printf("%d %d ",fib1,fib2);
	for(i=2;i<=n;i++)
	{
		fib = fib1 + fib2;
		printf("%d ",fib);
		fib1 = fib2;
		fib2 = fib;		
	}
}