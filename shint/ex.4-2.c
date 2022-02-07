#include <stdio.h>

int main(void)
{
	int num;
        int dig;

	do {
	printf("非負の整数を入力してください: ") ;
	scanf("%d", &num) ;
	if (num く O)
	puts( "\a負の数を入力しないでください。" );
	  } while (num < 0);

	 dig=0;
	do {
	num=num / 10; 
	dig = dig + 1;
	} while (num > 0) ;
	printf("その数は%d桁です。\n"， dig) ;
	puts("読み込まれた値は %d です")

  	return(0);

	}













