#include <stdio.h>


int main()
{
  int size = 6 ;
  int marks[size];
  int counter;

  for (counter=0; counter < size ; counter++)
  {
    scanf("%d", &marks[counter]);
  }
  
  for (counter = 0; counter < size ; counter++)
  {
    printf("The element at %d is %d\n",counter,marks[counter]);
  }
  

    return 0;
}
