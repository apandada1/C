#include <stdio.h>
int hcf(int,int);
int lcm(int,int);
void main() {
	int x,y;
	printf("Enter two positive integers\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("HCF is %d\n", hcf(x,y));
	printf("LCM is %d\n", lcm(x,y));
}
int max(int x, int y) {
	if (x>=y)
		return x;
	else
		return y;
}
int min(int x, int y) {
	if (x>=y)
		return y;
	else
		return x;
}
/*int hcf(int x, int y) {
	int i;
	printf("before loop%d\n",i);
	for(i=min(x,y);i>1;i=i-1) {
	printf("after loop%d\n",i);
		if(x%i==0 && y%i==0)
			break;
	}
	return i;
}*/
int hcf(int x, int y) {
	int i;
	printf("before loop%d\n",i);
	for(i=min(x,y);i>1;i=i-1) {
	printf("after loop%d\n",i);
		if(x%i==0 && y%i==0)
			{return i;
			break;}
	}
}
int lcm(int x, int y) {
	int i;
	for (i=max(x,y);;i++){
		if(i%x==0 && i%y==0)
			{return i;
			break;}
	}
}
