#include <stdio.h>
#include <math.h>

double factorial(int y){
	int i;
	double z=1;
	for (i = 1; i < y+1; ++i)
	{
		z = z*i;
	}
	return z;
}

void main(){
	double x;
	int i,t;
	double sum = 0;
	double y=0;
	printf("***---Poisson distribution probability calculator---***\n\n");
	printf("Enter parameter lambda:  ");
	scanf("%lf",&x);
	if (x <= 0)
	{
		printf("lambda must be positive.\n");
		printf("Enter parameter lambda:  ");
		scanf("%lf",&x);
	}
	printf("Enter t to calculate P[X <= t]:  ");
	scanf("%d",&t);
	printf("\n");
	for (i = 0; i < t+1; ++i)
	{
		//printf("factorial %d is %f\n", i,factorial(i)); //just to check if it works
		y = exp(-x) * pow(x,i)/ factorial(i);
		printf("P[X = %d] = %lf\n", i,y);
		sum = sum+y;
	}
	printf("\n");
	printf("P[X <= %d] = %lf\n", t, sum);
	printf("P[X > %d] = %lf\n", t, (1-sum));
}