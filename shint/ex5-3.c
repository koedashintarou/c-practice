#include <stdio.h>


int main (void)
{
  int i;
  int vc[5] = {1, 2, 3, 4, 5};

  for(i = 5; i > 1; i--)
    printf("vc[%d] = %d\n", i, vc[i]);

  return(0);
}


