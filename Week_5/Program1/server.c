#include<string.h>

void reverse(char *s,char *rev)
{
	int i,j,len;
	len = strlen(s);
	for(i=0,j=len-1;i<len;i++,j--)
	{
		*(rev+i) = *(s+j);
	}
	rev[len] = '\0';
}
int strcmp1(char *s1, char *s2)
{
	int i,j,len;
	len = strlen(s1);
	for(i=0,j=0;i<len;i++,j++)
	{
		if(*(s1+i) == *(s2+j))
			continue;
		else if(*(s1+i) > *(s2+j))
			return 1;
		else 
			return -1;		
	}
	return 0;
}
	