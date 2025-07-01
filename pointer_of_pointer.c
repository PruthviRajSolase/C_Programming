#include <stdio.h>

int main()
{
    int a = 30;
    int *a1;
    a1 = &a;

    int **b;
    b = &a1;

    printf("Address of a is %p\n",&a1);
    printf("The Value of a is %d\n",*a1);
    printf("The Address of a1 is %p\n",&b);
    printf("Value Stored in a1 is %p\n",*b);
    
    return 0;
}
