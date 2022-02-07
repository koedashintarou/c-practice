#include <stdio.h>

void print(int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("文字列");
}
int main(void)
{
	int count = 5;

	print(count);
	return(0);
}