#include<stdio.h>

int main(void)
{
   int sum = 0;
   int no;
   int min, max;

   printf("�n�܂�̐��F");
   scanf("%d", &min);

   printf("�I���̐��F");
   scanf("%d", &max);

   no = min;

   do{
      sum = sum + no;
      no = no + 1;
   }while(no <= max);

    printf("%d ���� %d �܂ł𑫂����l�� %d �ł��B\n", min, max, sum);

    return(0);
}
