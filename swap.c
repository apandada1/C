#include <stdio.h>
int swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void main()
{
	int a,b;
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a is now%d and b is now %d\n", a,b);
}