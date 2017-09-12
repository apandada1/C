#include <stdio.h>

void main()
{
	int n;
	printf("Enter the number of Fibonacci numbers: ");
	scanf("%d",&n);
	if(n<1)
	{printf("invalid\n");
	return;
	}
	int i=0;
	int j=1;
	int k=1;
	for (k=1;k<=n;k=k+1)
	{
	printf("%d\n",i);
	i=i+j;
	j=i-j;
	}
}
