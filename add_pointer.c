#include <stdio.h>

int add(int *a,int *b)
{
    return *a + *b;
}


int main()
{
    int num1,num2;
    int sum;
    

    printf("Enter num1\n");
    scanf("%d",&num1);

    printf("Enter y\n");
    scanf("%d",&num2);

    sum = add(&num1,&num2);

    printf("Sum of %d and %d is %d",num1,num2,sum);


    
    return 0;
}
