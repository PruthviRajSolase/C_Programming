#include <stdio.h>
#include <string.h>



int main()
{
    char name[200];
    

    printf("Enter any name to be reversed\n");
    scanf("%s",name);

    int length = strlen(name);

    printf("Reversed name is\n"); 
    for ( int i = length - 1; i >= 0 ; i--)
    {
        printf("%c", name[i]);
    }
    
    
    return 0;
}
