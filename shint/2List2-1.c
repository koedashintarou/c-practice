#include<stdio.h>

void func(int *a)
{
	a[3] = 3;
}
int main(void)
{
	int X[10];
	int i;

	for(i = 0; i < 10; i++)
	x[i] = 0;

	func(x);

	for(i = 0; i < 10; i++)
		printf("%d-", x[i]);
	printf("\n");

	
	return(0);
}
