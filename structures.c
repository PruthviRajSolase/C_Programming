#include <stdio.h>

int main()
{
    struct STUDENT
    {
        char name[100];
        int age;
        int rollNo;
    };

    struct STUDENT Raj = {"Pruthviraj Solase",18,30};
    printf("%s ages %d with rollNo. %d",Raj.name,Raj.age,Raj.rollNo);
    
    
    return 0;
}
