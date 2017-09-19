#include <stdio.h>
#include <malloc.h>

void main()
{
	int *a;
	int *b;
	int n, i,j,k;
	printf("Enter size of vector: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	b=(int *)malloc(sizeof(int)*n);
	printf("Enter the %d elements of the first vector\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d.	", i+1);
		scanf("%d", &a[i]);
	}
	printf("Enter the %d elements of the second vector\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d.	", i+1);
		scanf("%d", &b[i]);
	}
	for (j = 0; j < n; j++)
	{
		for (k = 0; k < n; k++)
		{
			printf("%d	", a[j]*b[k]);
		}
		printf("\n");
	}
}
