#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter any Word\n");
    scanf("%s",&name);

    int length = strlen(name);

    printf("Number of characters are %d\n",length);

    return 0;
}
