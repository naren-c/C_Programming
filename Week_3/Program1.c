#include<stdio.h>
#include<conio.h>

int reverse(int num);
int isPalindrome(int num1, int num2);

int main()
{
	int num,temp,num1,rev=0;
	printf("Enter a number to check if its a palindrome ");
	scanf("%d",&num);
	
	num1 = num;
	rev = reverse(num);
	
	if(isPalindrome(num1, rev))
		printf("The number %d is a Palindrome ",num1);
	else
		printf("The number %d is not a Palindrome ",num1);
	return 0;

}
int reverse(int num)
{
	int rev = 0;
	int temp;
	while(num)
	{
		temp = num%10;
		num = num/10;
		rev = rev*10 + temp;
	}
	return rev;
	
}

int isPalindrome(int num1, int num2)
{
	if(num1==num2)
		return 1;
	else
		return 0;
}	