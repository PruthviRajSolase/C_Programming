#include <stdio.h>

int main()
{
    int num;
    int result ;

    printf("Enter the Number\n");
    scanf("%d",&num);

    for (int i = num; i>= 1; i--)
    {
          result = result * i ;

    }
    printf("Factorial is %d",result);
    
    return 0;
}
