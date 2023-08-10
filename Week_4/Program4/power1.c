int power(int base, int pow)
{
	if(base==0)
		return 0;
	else if(pow==0)
		return 1;
	else
		return base*power(base,pow-1);
}