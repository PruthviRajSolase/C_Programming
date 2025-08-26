#include <stdio.h>


int main()

{
    int rows,columns;
    printf("Enter No. of rows and columns\n");
    scanf("%d %d",&rows,&columns);

    for (int i = 0; i < rows; i++)
    {
        printf("* ");

        for (int j = 1; j < columns ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0;
}
