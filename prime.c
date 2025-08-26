#include <stdio.h>

int main()
{
    int num , counter = 1;
    
    printf("Enther the number\n");
    scanf("%d",&num);

    for (int i = 2; i <= (num/2); i++)
    {
        if ((num % i) == 0)
        {
           counter = 0;
           break;
        }    
    }

    if (counter == 0)
       printf("%d is a composite number",num);
    else
        printf("%d is a prime number",num);
    
    
    
    return 0;
}
