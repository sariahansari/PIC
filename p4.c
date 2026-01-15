#include <stdio.h>
int main()
{
  int a = 15,b = 4;
  int sum,diff, prod,quo,remain;

  sum = a+b;
  printf("sum:%d+%d=%d\n",a,b,sum);

  diff = a-b;
  printf("diff: %d-%d=%d\n",a,b,diff);

  prod = a*b;
  printf("prod: %d*%d=%d\n",a,b,prod);

  quo = a/b;
  printf("quo: %d/%d=%d\n",a,b,quo);

  remain = a%b;
  printf("ramin: %dmod%d=%d",a,b,remain);



}