#include <stdio.h>
void main ()
{
	printf("enter the number to check prime or not:  ");
	int p;
	scanf("%d",&p);
	int i=2;
	while (i<=p/2)
	{
		if(p%i==0)
		{
		break;
		}
		i=i+1;
	}
	if(i<=p/2)
	{
	printf("%d is not prime\n", p);
	}
	else 
	{
	printf("%d is prime\n", p);
	}
}
