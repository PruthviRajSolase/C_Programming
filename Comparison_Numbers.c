#include <stdio.h>



int main()
{
    int num1,num2;

    int *n1,*n2;
    n1 = &num1;
    n2 = &num2;

    printf("Enter num1\n");
    scanf("%d",&num1);

    printf("Enter num2\n");
    scanf("%d",&num2);

    if (*n1>*n2)
    {
        printf("Greatest Number of given Numbers is %d\n",*n1);
    } 
    else  {
        printf("Greatest number of given numbers is %d\n",*n2);
    }
    

    return 0;
}
