#include <stdio.h>

int main(void)
{
int n1, n2, n3, min;

puts("�O�̐�������͂��Ă�������:");
printf("����1:")  scanf("%d", &n1);
printf("����2:")  scanf("%d", &n2);
printf("����3:")  scanf("%d", &n3);

min = n1;
(n2 < min) ? min = n2 :  min = n3;


printf( "�ŏ��l��%d�ł��B \n" , min) ;



return(0);


}









