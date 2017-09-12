#include <stdio.h>
int swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void main()
{
	int SIZE,i,j,k;
	i=0;
	j=0;
	k=0;
	printf("Enter size of array:  ");
	scanf("%d",&SIZE);
	int A[SIZE];
	printf("Enter %d elements of array\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&A[i]);
	}
	for (j = 0; j < SIZE/2; j++)
	{
		swap(&A[j], &A[SIZE-1-j]);
	}
	for (k = 0; k < SIZE; k++)
	{
		printf("The %dth element is now %d\n", k, A[k]);
	}
}
