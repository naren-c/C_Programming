#include<stdio.h>
#include<conio.h>
#include "server.h"

int main()
{
	char s[40],mod[40];
	printf("Enter a string ");
	scanf("%[^\n]",&s);
	fflush(stdin);
	printf("The string before duplication is %s\n",s);
	remduplicate(s,mod);
	printf("The string after removing duplication is %s",mod);
	return 0;
}
