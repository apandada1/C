#include <stdio.h>
void main ()
{
	printf("enter the number upto which sum is calculated:  ");
	int p;
	scanf("%d",&p);
	int i=1;
	int s=0;
	for(;i<=p;i=i+1)
	{
		s=s+i;
	}
	printf("The sum is %d\n",s);
}
