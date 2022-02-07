#include <stdio.h>

int main(void)
{
	int i;
	int k;

	printf("iを入力してください :");
	scanf("%d", &i);
	printf("kを入力してください :");
	scanf("%ld", &k);

	printf("i = %d\n", i);
	printf("k = %d\n", k);
	return(0);
}