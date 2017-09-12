#include <stdio.h>
int bsearch(int a[], unsigned int beg, unsigned int end, int val) {
	int mid=(beg+end)/2;
	if(beg==end)
		if(a[beg]==val)
			return beg;
		else
			return -1;
	else
		if (a[mid]==val)
			return mid;
		else if (a[mid]<val)
			return bsearch(a, mid+1, end, val);
		else
			return bsearch(a, beg, mid, val);
}
void main() {
	int SIZE, i, z, y;
	printf("Enter the number of elements in array: ");
	scanf("%d",&SIZE);
	int A[SIZE];
	printf("Enter %d integers in order\n", SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d",&A[i]);
	printf("Enter the number you want to find: ");
	scanf("%d", &z);
	y=bsearch(A,0,SIZE,z);
	if (y>-1)
		printf("%d occurs at position %d\n", z,y);
	else
		printf("%d is not found\n", z);
}
