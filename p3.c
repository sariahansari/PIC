#include <stdio.h>
int main()
{
  int num = 10;
  int x,y;
  printf("Original value of num: %d\n",num);
  num++;
  printf("After unary plus (num++): %d\n",num);
  num--;
  printf("After unary minus (num--): %d\n",num);
  
  x= ++num;
  printf("Afetr pre-increment (++num), num %d, x: %d\n",num,x,y);

  y= num++;
  printf("After pre-increment (num++), num: %d\n",num,x,y);


}