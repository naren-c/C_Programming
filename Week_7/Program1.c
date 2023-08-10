#include<stdio.h>
#include<string.h>

void read(int);
void display(int);
void sort(int);

struct cricket
{
	char player_name[30];
	char team_name[30];
	float batting_avg;
}cricinfo[5];
int main()
{
	int n = 5;
	read(n);
	sort(n);
	display(n);
	return 0;
}
void read(int n)
{
	int i;
	printf("Enter data of 5 players \n");
	for(i=0;i<n;i++)
	{
		printf("Enter PName TName BAvg for player-%d\t",i+1);
		scanf("%s%s%f",&cricinfo[i].player_name,&cricinfo[i].team_name,&cricinfo[i].batting_avg);
	}
}
void sort(int n)
{
	char temp[30];
	float temp1;
	for(int i=0;i<n-1;i++) 
	{ 
		for(int j=0;j<n-i-1;j++) 
		{ 
			if(strcmp(cricinfo[j].team_name,cricinfo[j+1].team_name)>0)
			{ 
				strcpy(temp,cricinfo[j].team_name);
				strcpy(cricinfo[j].team_name,cricinfo[j+1].team_name);
				strcpy(cricinfo[j+1].team_name,temp);
				strcpy(temp,cricinfo[j].player_name);
				strcpy(cricinfo[j].player_name,cricinfo[j+1].player_name);
				strcpy(cricinfo[j+1].player_name,temp);
				temp1 = cricinfo[j].batting_avg;
				cricinfo[j].batting_avg = cricinfo[j+1].batting_avg;
				cricinfo[j+1].batting_avg = temp1;		
			}
		}
	}			 
}
void display(int n)
{
	int i;
	printf("After teamwise sorting...the player list is\n");
	for(i=0;i<n;i++)
	{
		printf("%s %s %.2f\n",cricinfo[i].player_name,cricinfo[i].team_name,cricinfo[i].batting_avg);
	}
}