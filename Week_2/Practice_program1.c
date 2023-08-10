#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,root1,root2,img;
	printf("Enter the coefficients a,b and c: ");
	scanf("%f%f%f",&a,&b,&c);
	discriminant = (b*b)-(4*a*c);
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("The roots are real and distinct, %f and %f",root1,root2);
	}
	else if(discriminant==0)
	{
		root1=root2=(-b)/(2*a);
		printf("The roots are real and equal, %f and %f",root1,root2);
	}
	else 
	{
		img = sqrt(-discriminant)/(2*a);
		root1 = root2 = (-b)/(2*a);
		printf("The root1 is %.2f+%f.2i",root1,img);
		printf("The root2 is %.2f-%.2fi",root2,img);
	}		
	return 0;
}