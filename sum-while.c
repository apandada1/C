#include <stdio.h>
void main ()
{
	printf("enter the number upto which sum is calculated:  ");
	int p;
	scanf("%d",&p);
	int i=1;
	int s=0;
	while(i<=p)
	{
		s=s+i;
		i=i+1;
	}
	printf("The sum is %d\n",s);
}
