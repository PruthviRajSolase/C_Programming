#include <stdio.h>

int main()
{
    struct STUDENT
    {
        char name[100];
        int age;
        int rollNo;
    };

    struct STUDENT Raj = {"Pruthviraj Nanasaheb Solase",18,30};
    printf("%s aged %d with rollNo. %d",Raj.name,Raj.age,Raj.rollNo);
    
    
    return 0;
}
