#include <stdio.h>
void main ()
{
	printf("enter the number whose factorial is calculated:  ");
	int p;
	scanf("%d",&p);
	int i=2;
	int s=1;
	for(;i<=p;i=i+1)
	{
		s=s*i;
	}
	printf("The factorial is %d\n",s);
}
