#include <stdio.h>

void swap(char *n1,char *n2)
{
    char un[100];

    int i=0;
    while (n1[i] != '\0')
    {
        un[i]=n1[i];
        i++; 
    }
    un[i]='\0';

      i=0;
    while (n2[i] != '\0')
    {
        n1[i]=n2[i];
        i++; 
    }
    n1[i]='\0';


      i=0;
    while (un[i] != '\0')
    {
        n2[i]=un[i];
        i++; 
    }
    n2[i]='\0';

}

int main()
{
    char name1[100];
    char name2[100];

    printf("Enter the names\n");
    scanf("%s %s",name1,name2);

    swap(&name1[0],&name2[0]);
    //swap(name1,name2);

    printf("Swapped names are %s and %s",name1,name2);

   

    return 0;
}
