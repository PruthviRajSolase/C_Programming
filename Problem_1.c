#include <stdio.h>

void function1();
void function2();


int main()
{
  printf("In main function\n");
  printf("Calling Function 1\n");
  function1();
  printf("In Main function after returning from function 1\n");

  return 0;
}

void function1()
{
  printf("You have Entered Function 1\n");
  printf("Calling Function 2\n");
  function2();

}

void function2()
{
  printf("You have Entered Function 2\n");
  printf("Get back to Main Function through function 1\n");
}