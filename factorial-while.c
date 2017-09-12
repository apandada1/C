#include <stdio.h>
void main ()
{
	printf("enter the number whose factorial is calculated:  ");
	int p;
	scanf("%d",&p);
	int i=2;
	int s=1;
	while(i<=p)
	{
		s=s*i;
		i=i+1;
	}
	printf("The factorial is %d\n",s);
}
