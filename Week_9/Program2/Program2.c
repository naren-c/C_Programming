#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0,lines=0;
	char file_name[50], data[100];
	printf("Enter the file name : ");
	scanf("%s",&file_name);
	printf("Enter the number of lines to be written : ");
	scanf("%d",&lines);
	fflush(stdin);
	printf("The lines are ");
	FILE *fp = NULL;
	fp = fopen(file_name,"a");
	if(fp != NULL)
	{
		while(count<lines)
		{
			scanf("%[^\n]",&data);
			fflush(stdin);
			fputs(data,fp);
			fputs("\n",fp);
			count++;
		}
		fclose(fp);
	}
	else
		printf("File could not be opened");	
	printf("The contents of the file %s is : \n",file_name);
	fp = fopen(file_name,"r");
	if(fp != NULL)
	{
		while(fgets(data,100,fp))
			printf("%s",data);
	}
	else
		printf("File could not be opened");
	return 0;
}
