#include <stdio.h>

void swap(int& x, int& y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
int main(void)
{
	int a = 5;
	int b = 3;

	swap(a, b);
	printf("A = %d\n", a);
	printf("B %d\n", b);
	return(0);
}