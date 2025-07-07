#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;

    char file;
printf("Content in the file is\n");

    fp = fopen("raj.txt","r");

    while (!feof(fp))
    {
        file = fgetc(fp);
        printf("%c",file);
    }
    

    fclose(fp);
    return 0;
}
