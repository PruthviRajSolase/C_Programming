#include <stdio.h>



int main()
{
  int a = 12 ;

  int *b;
  b = &a;
   
  printf("The address of a is %p\n", b);
  printf("The Value store in a is %d\n",*b);
  
  return 0;
}
