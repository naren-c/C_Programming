#include<stdio.h>
#include<conio.h>
int main()
{
	char file_one[40], file_two[30], file_three[60],data[100];
	printf("Enter the 1st file name : ");
	scanf("%s",&file_one);
	printf("Enter the 2st file name : ");
	scanf("%s",&file_two);
	printf("Enter the new file name to merge the two files : ");
	scanf("%s",&file_three); 
	FILE *fp3 = NULL;
	fp3 = fopen(file_three,"a");
	FILE *fp1 = NULL;
	fp1 = fopen(file_one,"r");
	if(fp1 != NULL)
	{
		while(fgets(data,100,fp1))
			fputs(data,fp3);
		fputs("\n",fp3);
	}
	else
		printf("File could not be opened");
	FILE *fp2 = NULL;
	fp2 = fopen(file_two,"r");
	if(fp2 != NULL)
	{
		while(fgets(data,100,fp2))
			fputs(data,fp3);
	}
	else
		printf("File could not be opened");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}