#include <stdio.h>

int main(void)
{
  int num;
  int dig;

	do {
	printf("�񕉂̐�������͂��Ă�������:");
	scanf("%d",&num);
	if (num < 0)
	puts("\a���̐�����͂��Ȃ��ł��������B");
	}while (num �� 0);


	dig = 0;
	do {
	   num /= 10;
	   dig++;
	}while (num > 0);
	printf("���̐���%d���ł��B\n, dig");

	return(0);
}













