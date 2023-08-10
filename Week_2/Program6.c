#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int date,month,year,leap=0;
	printf("Enter the date ");
	scanf("%d",&date);
	printf("Enter the month ");
	scanf("%d",&month);
	printf("Enter the year ");
	scanf("%d",&year);
	printf("The date is %d/%d/%d",date,month,year);		
	if(date>31 && date<1)
	{
		printf("Invalid date");
		return 0;
	}
	if(month>12 || month <1)
	{
		printf("Invalid month");
		return 0;
	}
	if(year%4==0 && year%100!=0 || year%400==0)
		leap=1;
	if(leap && month == 2 && date == 28)
		date = 29;
	else
	{
		if(date==31 && (month==1 || month==3 || month==5 || month==7 || month==10))
		{
			month = month+1;
			date=1;
		}
		else if(date==31 && month==12)
		{
			month = 1;
			date = 1 ;
			year++;
		}
		else if(date==30 && (month==4 || month==6 || month==8 || month==9 || month==11))
		{
			month++;
			date=1;
		}
		else if(date==28 && month==2)
		{
			date=1;
			month++;
		}
		else
		{
			date++;
		}
	}
	printf("\nThe next date is %d/%d/%d",date,month,year);		
		
	return 0;
}