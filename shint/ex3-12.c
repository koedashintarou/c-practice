#include <stdio.h>

int main(void)
#include <stdio.h>

int main(void)
{
int month;

printf("何月ですか？:");  scanf("%d", &month);


switch (12 - month) {

case 9, 8, 7 : puts("春です") ; break;
case 6, 5, 4 : puts("夏です") ; break;
case 3, 2, 1 : puts("秋です") ; break;
case 0, 11, 10 : puts("冬です") ; break;
}

return(0);


}


}








