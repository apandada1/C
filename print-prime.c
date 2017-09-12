#include <stdio.h>

void main()
{
	int n;
	printf("Enter the number of primes: ");
	scanf("%d",&n);
	if(n<1)
	{printf("invalid\n");
	return;
	}
	int j=1;
	int k=2;
	while (j<=n)
	{if(isPrime(k)==1)
		{printf("%d\n",k);
		j=j+1;
		}
	k=k+1;
	}
}
int isPrime(int p)
{
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
	return 0;
	}
	else 
	{
	return 1;
	}
}
