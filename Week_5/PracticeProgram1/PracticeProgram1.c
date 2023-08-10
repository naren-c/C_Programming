#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "server.h"

int main()
{
	char s[50],s1[50];
	int i,len;
	printf("Enter a string ");
	scanf("%[^\n]",&s);
	fflush(stdin);
	printf("%s",s);
	finduniquechar(s,s1);
	len = strlen(s1);
	for(i=0;i<len;i++)
	{
		printf("\n%c occurs %d times",s1[i],findoccurence(s,s1[i]));
	}
	return 0;
}
