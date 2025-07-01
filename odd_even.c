#include <stdio.h>

int oddeven(int *num);

int main()
{
    int num;
   

    printf("Enter the Number\n");
    scanf("%d",&num);

    oddeven(&num);

    return 0;
}

int oddeven(int *num)
{
    if (*num % 2 == 0)
    {
        printf("The Given Number is Even");
    }
    else{
        printf("The Given Number is odd");
    }
    
    
}
