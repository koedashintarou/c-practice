#include <stdio.h>

int main(void)
{
int vx, vy;

puts("��̐�������͂��Ă�������:");

printf("����A:")  scanf("%d", &vx);
printf("����B:")  scanf("%d", &vy);


if(&vy % &vx)
  puts("B��A�̖񐔂ł�");
else
  puts("B��A�̖񐔂ł͂���܂���");

return(0);


}








