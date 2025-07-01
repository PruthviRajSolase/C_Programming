#include <stdio.h>

int main()
{
    int num[] = {32,21,45,30,7};

    int *a ;
    a = &num[0];

    for (int i = 0; i < 5; i++)
    {
        printf("The Numbers are %d\n",*a);
        a++;
        
    }
    

    return 0;
}
