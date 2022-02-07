#include <stdio.h>

int main(void)
{
  int num;
  int dig;

	do {
	printf("”ñ•‰‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&num);
	if (num < 0)
	puts("\a•‰‚Ì”‚ğ“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B");
	}while (num ‚­ 0);


	dig = 0;
	do {
	   num /= 10;
	   dig++;
	}while (num > 0);
	printf("‚»‚Ì”‚Í%dŒ…‚Å‚·B\n, dig");

	return(0);
}













