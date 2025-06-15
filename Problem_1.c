#include <stdio.h>


int sum(int a, int b)
{
    return a + b ;

}

int main()
{
    int a,b,c ;
    a = 45 ;
    b = 32 ;
    c = sum(a,b);
    printf(" Sum is %d", c);
    

    return 0;
}
