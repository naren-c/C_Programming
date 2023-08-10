#include<stdio.h>
#include<conio.h>

int decToOct(int num);

int main()
{
	int num,octal;
	printf("Enter a number ");
	scanf("%d",&num);
	octal = decToOct(num);
	printf("The decimal number %d in octal is %d",num,octal);
	return 0;
}

int decToOct(int dec)
{
	int rem,oct,k;
	k = 1;
	oct = 0;
	while(dec!=0)
	{
		rem = dec%8;
		oct = rem*k + oct;
		k = k*10;
		dec = dec/8;
	}
	return oct;	
}