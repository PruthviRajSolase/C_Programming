#include <stdio.h>

int main()
{
    int age;
    printf("Enter your Age\n");

    scanf("%d", &age);
    printf("You have Entered Your Age %d as your age\n", age);
    
    if (age>=18) 
    {
        printf("You can Vote!");

    }
    else {
        printf("GO AND STUDY");

    }


    return 0;
}
