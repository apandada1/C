#include <stdio.h>

void main(int argc, char const *argv[])
{
	float x,y,i,y_0,k,x_f,delta_x,iterations;
	printf("Input initial value:	");
	scanf("%f", &y_0);
	printf("Input rate constant:	");
	scanf("%f", &k);
	printf("Enter value of x to calculate y for:	");
	scanf("%f", &x_f);
	printf("Enter no of interations:	");
	scanf("%f", &iterations);
	y = y_0;
	delta_x = x_f/iterations;
	for (i = 0; i < iterations; ++i)
	{
		y = y + ((k*y)*delta_x);
		printf("Current no of step %f and y is %f\n", i,y);
	}
	printf("y is %f\n", y);
}