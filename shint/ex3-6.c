#include <stdio.h>

int main(void)
{
int n1, n2, n3, n4, max;

puts("l‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
printf("®”1:")  scanf("%d", &n1);
printf("®”2:")  scanf("%d", &n2);
printf("®”3:")  scanf("%d", &n3);
printf("®”4:")  scanf("%d", &n4);

max = n1;
if(n2 < max) max = n2;
if(n3 < max) max = n3;
if(n4 < max) max = n4;

printf( "Å‘å’l‚Í%d‚Å‚·B \n" , max) ;



return(0);


}








