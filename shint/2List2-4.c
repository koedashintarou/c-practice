#include<stdio.h>

void func(int *a)
{
	int i;

	a[0] = 10;
	a[1] = 8;
	a[2] = 12;
	printf("\nfunc �֐� \n");
	for(i = 0;i < 10; i++)
		printf("%4d, a[i]");
}

int main(void)
{
	int i;
	int x[10];

	for(i = 0; i < 10; i++)
		x[i] = i;
	printf("\nfunc �֐����Ăяo���O \n");
	for(i = 0; i < 10; i++)
		printf("%4d", x[i]);
	func(x);
	printf("\nfunc �֐����Ăяo������ \n");
	for(i = 0; i < 10; i++)
		printf("%4d", x[i]);

	return(0);
}
