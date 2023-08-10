#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int roll_no;
	char name[30];
}student[20];


void sort_rollno(int);
void sort_name(int);
void display(int n);

int main()
{
	int choice, i = 0;
	char data[100],file_name[100];
	printf("Input file name : ");
	scanf("%s",&file_name);
	printf("Output : \n");
	FILE *fp = NULL;
	fp = fopen(file_name,"r");
	if(fp != NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%d,%s",&student[i].roll_no,&student[i].name);
			printf("%d %s\n",student[i].roll_no,student[i].name);
			i++;
		}
		fclose(fp);
	}
	else
		printf("File could not be opened");
	while(1)
	{
		printf("Enter your option\n1.sort on roll\n2.sort on name\n3.exit\nYour choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: sort_rollno(i);
					display(i);
					break;
			case 2: sort_name(i);
					display(i);
					break;
			case 3: exit(0);
			default: printf("Invalid option chosen");
		}
	}
	return 0;
}
void sort_rollno(int n) 
{
	char temp[30];
	int temp1;
	for(int i=0;i<n-1;i++) 
	{ 
		for(int j=0;j<n-i-1;j++) 
		{ 
			if(student[j].roll_no > student[j+1].roll_no)
			{ 
				temp1 = student[j].roll_no;
				student[j].roll_no=student[j+1].roll_no;
				student[j+1].roll_no=temp1;
				strcpy(temp,student[j].name);
				strcpy(student[j].name,student[j+1].name);
				strcpy(student[j+1].name,temp);
			}
		}
	}			 

}
void sort_name(int n)
{
	char temp[30];
	int temp1;
	for(int i=0;i<n-1;i++) 
	{ 
		for(int j=0;j<n-i-1;j++) 
		{ 
			if(strcmp(student[j].name,student[j+1].name)>0)
			{ 
				strcpy(temp,student[j].name);
				strcpy(student[j].name,student[j+1].name);
				strcpy(student[j+1].name,temp);
				temp1 = student[j].roll_no;
				student[j].roll_no=student[j+1].roll_no;
				student[j+1].roll_no=temp1;
			}
		}
	}			 
}
void display(int n)
{
	int i;
	printf("After sorting ...the list is\n");
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",student[i].name,student[i].roll_no);
	}
}