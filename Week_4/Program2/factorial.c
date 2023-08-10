int fact(int n)
{
	if(n==0)
		return 1;
	else 
		return n*fact(n-1);
}
int combination(int n, int r)
{
	return fact(n)/(fact(r)*(fact(n-r)));
}
