#include <stdio.h>

int main(void)
{
	int num;

	do {
	  pintf("”ñ•‰‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B;);
	  scanf("%d", &num);
	  if (num < 0)
	      puts("\a•‰‚Ì”‚ğ“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B");
	  } while (num < 0);

	  printf("‚»‚Ì”‚ğ‹t‚©‚ç“Ç‚Ş‚Æ");
	  do {
	    printf("%d", num % 10);
	    num = num / 10;
	  } while (num > 0);
	  puts("‚Å‚·");
	  puts("“Ç‚İ‚Ü‚ê‚½’l‚Í %d ‚Å‚·")

  	return(0);

	}













