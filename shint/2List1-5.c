#include <stdio.h>

void print(int n)
{
	while(n--)
		printf("文字列");
}
int main(void)
{
	int count = 5;

	print(count);
	return(0);
}