#include<string.h>
void replace(char *s, char ch1, char ch2)
{
	int i,len;
	len = strlen(s);
	for(i=0;i<len;i++)
	{
		if(*(s+i)==ch1)
			*(s+i) = ch2;
	}
}