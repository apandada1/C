#include <stdio.h>
void main ()
{
	printf("enter the number to check prime or not:  ");
	int p;
	scanf("%d",&p);
	int i=2;
	for (;i<p;)
	{
		if(p%i!=0)
		{
		i=i+1;
		}
		else 
		{
		printf("%d is not prime\n", p);
		return;
		}
		if(i==p)
		{
		printf("%d is prime\n", p);
		}
	}
}
