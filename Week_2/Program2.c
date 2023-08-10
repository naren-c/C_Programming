#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[50]; int i;
	printf("Enter a string of characters to be converted to upper case: ");
	gets(s);
	printf("%s\n",s);
	for(i=0;i<strlen(s);i++)
		if(s[i]!=' ')
			s[i]=s[i]-32;
	printf("%s",s);
	return 0;
}