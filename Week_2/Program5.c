#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c; 
	char choice;
	printf("Enter the operation you want to perform (+,-,*,/) ");
	scanf("%c",&choice);
	printf("Enter the operands ");
	scanf("%f%f",&a,&b);
	switch(choice)
	{
		case '+': c = a + b;
				  printf("The sum of the two operands is = %f",c);
				  break;
		case '-': c = a - b;
				  printf("The difference of the two operands is = %f",c);
				  break;
		case '*': c = a * b;
				  printf("The product of the two operands is = %f",c);
				  break;
		case '/': c = a / b;
				  printf("The quotient of the two operands is = %f",c);
				  break;
		default: printf("Invalid choice");
	}
}