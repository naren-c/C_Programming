#include<stdio.h>
#include<conio.h>
#include "server.h"

int main()
{
	char s[100],rev[50],r;
	printf("Enter a string ");
	scanf("%s",&s);
	reverse(s,rev);
	printf("Reveresed sting is %s\n",rev);
	if(!strcmp1(s,rev))
		printf("The string is a palindrome");
	else
		printf("The string is not a palindrome");
	return 0;
}
	