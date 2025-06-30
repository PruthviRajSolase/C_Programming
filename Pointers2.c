#include  <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b ;

    b = c - b ;
    a = c - b ;

    printf("New Value of a is %d\nNew Value of b is %d",a,b);

    return 0;
}
