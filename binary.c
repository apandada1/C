
#include <stdio.h>
void main() {
	int SIZE, i, z,j,mid;
	unsigned int y;
	printf("Enter the number of elements in array: ");
	scanf("%d",&SIZE);
	int A[SIZE];
	printf("Enter %d integers in order\n", SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d",&A[i]);
	printf("Enter the number you want to find: ");
	scanf("%d", &z);
	i=SIZE-1;
	int d=0;
	while(d<=i){
		mid=(d+i)/2;
		if(A[mid]==z)
		{
			printf("%d occurs at position %d\n", z,mid);
			return;
		}
		else if(A[mid]<z)
		{
			d=mid+1;
			
		}
		else if(A[mid]>z)
		{
			i=mid-1;
		}
	}
	/*if (y>-1)
		printf("%d occurs at position %d\n", z,y);
	else if (A[0]==z)
		printf("%d occurs at position 0\n", z);
	else if (A[1]==z)
		printf("%d occurs at position 1\n", z);
	else if (A[SIZE-2]==z)
		printf("%d occurs at position %d\n", z, SIZE-2);
	else if (A[SIZE-1]==z)
		printf("%d occurs at position %d\n",z, SIZE-1);*/
	
		printf("%d is not found\n", z);
}
