/*#include<stdio.h> 
int search(int[],int,int,int,int(*p)(int)); 
int iseven(int); 
int islessthan22(int); 
int main() 
{ 
	int a[]={20,30,40,45,55,89,101}; 
	int n; 
	int key; 
	int pos; 
	n=sizeof(a)/sizeof(*a); 
	printf("Enter the element to be searched:"); 
	scanf("%d",&key); 
	pos=search(a,0,n-1,key,iseven); 
	if(pos==-1) 
		printf("Element not found\n"); 
	else 
		printf("Element is even and found at %d\n",pos); 
	pos=search(a,0,n-1,key,islessthan22); 
	if(pos==-1) 
		printf("Element not found\n"); 
	else 
		printf("Element is less than 22 and found at %d\n",pos); 
	return 0; 
} 
int iseven(int x) 
{ 
	return x%2==0; 
} 
int islessthan22(int x) 
{ 
	return x<22; 
} 
int search(int a[],int low,int high,int key,int(*p)(int))
{ 
	int pos=-1; 
	int mid; 
	if(low>high) 
		return pos; 
	else 
		mid=(low+high)/2; 
	if(a[mid]==key && p(key)) 
		pos=mid; 
	else if(a[mid]>key) 
		return search(a,low,mid-1,key,p); 
	else 
		return search(a,mid+1,high,key,p); 
	return pos; 
}*/

#include <stdio.h>
int binsearch(int *a,int low,int high,int key,int (*fn)(int));
int even(int x);
int num(int x);
int main()
{
  int a[]={11,13,18,19,22,33,55,66,77,88};
  int key;
  int n=sizeof(a)/sizeof(*a);
  printf("Enter the element to be searched: ");
  scanf("%d",&key);
  int pos=binsearch(a,0,n-1,key,even);
  if(pos==-1)
	printf("Number is not even\n");
  else
	printf("It is even and found at %d position\n",pos);
  pos=binsearch(a,0,n-1,key,num);
  if(pos==-1)
	printf("Number is not less than 22\n");
  else
	printf("It is less than 22 and found at %d position\n",pos);
  return 0;
}
int even(int x)
{
  return x%2==0;
}
int num(int x)
{
  return x<22;
}
int binsearch(int *a,int low,int high,int key,int (*fn)(int))
{
  int mid; int res=-1; int m;
  if(low>high)
    return res;
  else
  {
    mid=(low+high)/2;
    if(a[mid]==key && fn(key))
      return mid;
    else if(a[mid]>key)
      return binsearch(a,low,mid-1,key,fn);
    else
      return binsearch(a,mid+1,high,key,fn);
  }
}




