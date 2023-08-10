#include<stdio.h>
#include<conio.h>

typedef struct complex
{
	int real;
	int img;
}complex_num;

void read_values(complex_num *c);
void display_complex(complex_num *c);
void add(complex_num *c1,complex_num *c2);
void sub(complex_num *c1,complex_num *c2);

int main()
{
	complex_num c1,c2;
	printf("Enter the real and imaginary part for first complex number: ");
	read_values(&c1);
	printf("Enter the real and imaginary part for second complex number: ");
	read_values(&c2);
	display_complex(&c1);
	display_complex(&c2);
	add(&c1,&c2);
	sub(&c1,&c2);
	return 0;
}
void read_values(complex_num *c)
{
	scanf("%d %d",&c->real,&c->img);
}
void display_complex(complex_num *c)
{
	printf("%d + %di\n",c->real,c->img);
}
void add(complex_num *c1,complex_num *c2)
{
	complex_num sum;
	sum.real = c1->real + c2->real;
	sum.img = c1->img + c2->img;
	printf("The sum is %d + %di\n",sum.real,sum.img);
}
void sub(complex_num *c1,complex_num *c2)
{
	complex_num sub;
	sub.real = c1->real - c2->real;
	sub.img = c1->img - c2->img;
	if(sub.img>0)
		printf("The difference is %d + %di\n",sub.real,sub.img);
	else 
		printf("The difference is %d %di\n",sub.real,sub.img);
}