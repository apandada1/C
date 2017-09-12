#include <stdio.h>

void main()
{
	int SIZE,i,j,k;
	i=0;
	j=0;
	k=0;
	printf("Enter size of array:  ");
	scanf("%d",&SIZE);
	int A[SIZE];
	int B[SIZE];
	printf("Enter %d elements of array\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&A[i]);
		B[i]=1;
	}
	for (j = 0; j < SIZE; j++)
	{	if(B[j]==-1) continue;
		for (k=j+1; k < SIZE; k++) {
			if(A[j]==A[k]){
				B[j]++;
				B[k]=-1; //So that it won't be counted again
			}
		}
		printf("%d occurs %d times\n", A[j],B[j]);
	}
}
