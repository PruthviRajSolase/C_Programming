#include  <stdio.h>

int main()
{
   
    int num[5];
    int i;
    printf("Enter array elements: \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    
    

    printf("Entered numbers are ");
    
    for (int i = 0; i < 5; i++)
    {
        
        printf("%d\n ",num[i]);
        
    }
    
        return 0;
}
