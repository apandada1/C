#include <stdio.h>
long int fact(int);
void main ()
{
	printf("n= ");
	int n;
	scanf("%d",&n);
	printf("r= ");
	int r;
	scanf("%d",&r);
	printf("\n");
	if(n<r || n<0)
	{
		printf("invalid\n");
		return;
	}
	long int P;
	long int C;
	P = fact(n)/fact((n-r));
	C = P/fact(r);
	printf("%dP%d = %ld and %dC%d = %ld\n", n,r,P,n,r,C);
}

long int fact(int a)
{
	int i=2;
	int s=1;
	while(i<=a)
	{
		s=s*i;
		i=i+1;
	}
	return s;
}
