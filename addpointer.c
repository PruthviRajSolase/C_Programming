#include <stdio.h>

int add(int *n1,int *n2)
{
  int Result ;
  Result = *n1 + *n2 ;

  return Result;
}

int main()

{

  int num1,num2,sum;

   printf("Enter the numbers\n");
   scanf("%d %d", &num1,&num2);

   sum = add(&num1,&num2);
   printf("The sum is %d",sum);

    return 0;
}
