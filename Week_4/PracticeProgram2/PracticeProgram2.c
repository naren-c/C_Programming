#include<stdio.h>
#include<conio.h>
#include "fib.h"
int main()
{
	int n;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}

