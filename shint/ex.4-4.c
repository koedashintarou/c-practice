#include <stdio.h>

int main(void)
{
  int num;

	do {
	printf("�񕉂̐�������͂��Ă�������:");
	scanf("%d",&num);
	if (num < 0)
	puts("a���̐�����͂��Ȃ��ł��������B");
	}while (num �� 0);


	printf("���̐����t����ǂނ�" );
	do {
	printf("%d", num % 10);
	num /= 10;
	} while (num > 0) ;
	puts("�ł��B");

	return(0);
}













