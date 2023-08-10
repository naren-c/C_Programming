#include<stdio.h>
#include<conio.h>

void triangle(int,int,int); //function declaration

int main()
{
	int a,b,c;
	printf("Enter the three angles of the triangle ");
	scanf("%d%d%d",&a,&b,&c);
	triangle(a,b,c); //function call
	return 0;
}

void triangle(int a,int b,int c) //function definition
{
	if(a>0 && a<179 && b>0 && b<179 && c>0 && c<179)
	{
		if(a+b+c==180)
			printf("The triangle is valid");
		else
			printf("The triangle is invalid");
	}
	else
		printf("Input angle/angles are invalid");
}