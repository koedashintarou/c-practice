#include <stdio.h>

int main(void)
{
	int num;

	do {
	  pintf("�񕉂̐�������͂��Ă��������B;);
	  scanf("%d", &num);
	  if (num < 0)
	      puts("\a���̐�����͂��Ȃ��ł��������B");
	  } while (num < 0);

	  printf("���̐����t����ǂނ�");
	  do {
	    printf("%d", num % 10);
	    num = num / 10;
	  } while (num > 0);
	  puts("�ł�");
	  puts("�ǂݍ��܂ꂽ�l�� %d �ł�")

  	return(0);

	}













