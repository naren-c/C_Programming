#include<stdio.h>
int main()
{
	int n;
	printf("Enter your marks: ");
	scanf("%d",&n);
	if(n>85 && n<=100)
		printf("Grade A");
	else if(n>60 && n<=85)
		printf("Grade B");
	else if (n>40 && n<=60)
		printf("Grade C");
	else if (n>30 && n<=40)
		printf("Grade D");
	else if (n<30 && n>=0)
		printf("Fail");
	else
		printf("Invalid input");
	return 0;
}



