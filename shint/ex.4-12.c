#include <stdio.h>

int main(void)
{
        int no, sum;

	
	for (no = 1, sum = 0; no <= 5; sum += no, no++)
	  printf("１から５までを足した値は%dです。\n", sum);

	return(0);
}













