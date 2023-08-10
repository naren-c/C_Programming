#include<string.h>
void finduniquechar(char *s, char *s1)
{
	int i,len,j,count,found;
	len = strlen(s);
	s1[0] = s[0];
	count = 1;
	for(i=1;i<len;i++)
	{
		found = 0;
		for(j=0;j<=count;j++)
		{
			if(*(s+i)==*(s1+j))
			{
				found = 1;
				break;
			}
		}
		if(!found)
		{
			s1[count]=s[i];
			count++;
		}
	}
	s1[count]='\0';
}
int findoccurence(char *s, char ch1)
{
	int i,len,count=0;
	len = strlen(s);
	for(i=0;i<len;i++)
	{
		if(*(s+i)==ch1)
			count++;
	}
	return count;
}
