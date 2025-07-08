#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char data[100];

    fp = fopen("raj.txt","r");

    fgets(data,100,fp);
    printf("Data Present in the file is : %s",data);        

    return 0;
}
