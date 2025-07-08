#include <stdio.h>
#include <string.h>


int main()
{
    FILE *fp;
    char w1[100];
    char w2[100];
    char w3[100];
    char w4[100];
    char w5[100];
    int i;

    fp = fopen("raj.txt","r");
    fscanf(fp,"%s %s %s %s %s %d",w1,w2,w3,w4,w5,&i);

    printf("The Data in the file is:  %s %s %s %s %s %d",w1,w2,w3,w4,w5,i);


    return 0;
}
