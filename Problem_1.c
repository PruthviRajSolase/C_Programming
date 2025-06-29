#include <stdio.h>

void add(int,int);


int main()
{
  int a, b ;
  printf("Enter Number a\n");
  scanf("%d\n", &a);
  printf("Enter Number b\n");
  scanf("%d\n", &b);
  add(a,b);
  
  return 0;
}

void add(int a ,int b)
{
  int Result = a + b;

  printf("The addition of given two numbers is %d\n",Result);
}
