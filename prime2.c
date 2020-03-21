#include <stdio.h>
#include <math.h>
void main ()
{
	printf("enter the number to check prime or not:  ");
	int p;
	scanf("%d",&p);
	int i=2;
	while (i<=sqrt(p)+1)
	{
		if(p%i==0)
		{
		break;
		}
		i=i+1;
	}
	if(i<=sqrt(p)+1)
	{
	printf("%d is not prime\n", p);
	}
	else 
	{
	printf("%d is prime\n", p);
	}
}
