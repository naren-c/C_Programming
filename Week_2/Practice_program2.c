#include<stdio.h>
#include<string.h>
int main()
{
	char a,str1[50],str2[50];
	int j=0,i=0;
	printf("Enter repeated characters ");
	gets(str1);
	str2[j]=str1[i];
	j = 1;
	a = str1[i];
	for(i=1;i<strlen(str1);i++)
	{
		if(a!=str1[i])
		{
			str2[j]=str1[i];
			j++;
			a=str1[i];
		}
	}
	str2[j]='\0';
	printf("%s",str2);
	return 0;
}