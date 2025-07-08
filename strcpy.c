#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = "I am Brilliant";
    char s2[100] = "I am Genius";
    char s3[100];

    printf("Data Stored in s1 and s2 before interchanging is\n %s\n%s\n",s1,s2);

    strcpy(s3,s2);
    strcpy(s2,s1);
    strcpy(s1,s3);

    printf("Data in s1 and s2 after interchanging is\n %s\n%s",s1,s2);
   

    return 0;
}
