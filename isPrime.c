#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int num, int *factor)
{
	int squareroot = sqrt(num) + 1;
	int i = 2;
	if (num == 2)
	{
		return 1;
	}
	if ((num % 2) == 0)
	{
		*factor = 2;
		return 0;
	}
	for (i = 3; i < squareroot; i = i+2)
	{
		if ((num % i) == 0)
		{
			*factor = i;
			return 0;
		}
	}
	return 1;
}


int main(int argc, char *argv[])
{
	int num;
	if (argc == 1) {
		printf("Enter the number to check whether it is prime:  ");
		scanf("%d", &num);
		printf("You can also sall \"isprime number1 number2 number3 etc.\"\n");
	}

	int *factor;
	for (int i = 1; i < argc; ++i)
	{
		num = atoi(argv[i]);
		if (num == 1)
		{
			printf("1 is neither a prime, nor a composite\n");
		}
		else if (isPrime(num, factor) == 1) {
			printf("%d is a prime\n", num);
		}
		else
		{
			printf("%d is not a prime, it is divisible by %d\n", num, *factor);
		}
	}
	return 0;
}