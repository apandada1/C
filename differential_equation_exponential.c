#include <stdio.h>
#include <math.h>
void main()
{
	long double x,y,i,y_0,k,x_f,delta_x,iterations;
	printf("Input initial value:	");
	scanf("%Lf", &y_0);
	printf("Input rate constant:	");
	scanf("%Lf", &k);
	printf("Enter value of x to calculate y for:	");
	scanf("%Lf", &x_f);
	printf("Enter no of interations:	");
	scanf("%Lf", &iterations);
	y = y_0;
	delta_x = x_f/iterations;
	for (i = 0; i < iterations; i++)
	{
		y = y + ((k*y)*delta_x)+((pow(k,2)*y)*pow(delta_x,2)/2)+((pow(k,3)*y)*pow(delta_x,3)/6)+(((pow(k,4)*y)*pow(delta_x,4))/24);
		printf("Current no of step %Lf and y is %Lf\n", i,y);
	}
	printf("y is %Lf at x = %Lf\n", y, x_f);
}