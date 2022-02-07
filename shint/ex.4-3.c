#include<stdio.h>

int main(void)
{
   int sum = 0;
   int no;
   int min, max;

   printf("始まりの数：");
   scanf("%d", &min);

   printf("終わりの数：");
   scanf("%d", &max);

   no = min;

   do{
      sum = sum + no;
      no = no + 1;
   }while(no <= max);

    printf("%d から %d までを足した値は %d です。\n", min, max, sum);

    return(0);
}
