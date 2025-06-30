#include <stdio.h>

int main()
{
    int a=20;
    int *b;
    b = &a ;

    printf("The address of the variable a stored in b is %p\n", b);
    printf("The Value of the Variable a is %d\n",*b);



    return 0;
}
