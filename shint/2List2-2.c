#include<stdio.h>

void func(int *a)
{
	printf("SizeOF(a) = %d\n", sizeof(a));
}

int main(void)
{
	int x[10];

	printf("SizeOf(X) = %d\n", sizeof(x));
	func(x);
	return(0);
}