#include<stdio.h>
#include<conio.h>
#include "server.h"
int main()
{
	char s[40],ch,ch1;
	printf("Enter a string ");
	scanf("%[^\n]",&s);
	fflush(stdin);
	printf("Enter a character to replace ");	
	ch = getchar();
	fflush(stdin);
	printf("Enter character to replace with "); 
	ch1 = getchar();
	replace(s,ch,ch1);
	printf("The modified sting is %s",s);
	return 0;
}

	
			
	