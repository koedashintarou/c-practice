#include <stdio.h>

int main(void)
{
  int i;
  int vc[5];

  for(i = 0; i < 4; i++)
    vc[i] = i + 1;

  for(i = 0; i < 4; i++)
    printf("vc[%d] = %d\n", i, vc[i]);

  return(0);
}


