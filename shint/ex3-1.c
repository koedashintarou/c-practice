#include <stdio.h>

int main(void)
{
int vx, vy;

puts("二つの整数を入力してください:");

printf("整数A:")  scanf("%d", &vx);
printf("整数B:")  scanf("%d", &vy);


if(&vy % &vx)
  puts("BはAの約数です");
else
  puts("BはAの約数ではありません");

return(0);


}








