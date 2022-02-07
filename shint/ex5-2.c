#include <stdio.h>

int main(void)
{
  int i;
  int vc[5];

  for(i = 5; i > 1; i--)
    vc[i] = i + 1;

  for(i = 5; i > 1; i--)
    printf("vc[%d] = %d\n", i, vc[i]);

  return(0);
}


