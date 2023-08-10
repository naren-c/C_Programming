#include<stdio.h>
#include<conio.h>

typedef struct date
{
	int dd;
	int mm;
	int yyyy;
}date_info;

void date_read(date_info *d);
void display_date(date_info *d);
int date_cmp(const date_info *d1, const date_info *d2);

int main()
{
	date_info d1,d2;
	
	printf("Enter Date1 ");
	date_read(&d1);
	printf("Enter Date2 ");
	date_read(&d2);
	printf("\nDate1 = ");
	display_date(&d1);
	printf("\nDate2 = ");
	display_date(&d2);
	
	int res = date_cmp(&d1,&d2);
	if(res==0)
		printf("\nDate1 is equal to Date2");
	else if(res>0)
		printf("\nDate1 is greater than Date2");
	else
		printf("\nDate1 is less than Date2");
	return 0;
}
void date_read(date_info *d)
{
	scanf("%d",&d->dd);
	scanf("%d",&d->mm);
	scanf("%d",&d->yyyy);
}
void display_date(date_info *d)
{
	printf("%d/%d/%d\n",d->dd, d->mm, d->yyyy);
}
int date_cmp(const date_info *d1, const date_info *d2)
{
	int res;
	if(d1->dd == d2->dd && d1->mm == d2->mm && d1->yyyy == d2->yyyy)
		res = 0;
	else if(d1->yyyy > d2->yyyy || d1->mm > d2->mm && d1->yyyy == d2->yyyy || d1->dd > d2->dd && d1->mm == d2->mm && d1->yyyy == d2->yyyy)
		res = 1;
	else 
		res = -1;
	return res;
}