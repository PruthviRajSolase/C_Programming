#include <stdio.h>
#include <string.h>


int main()
{
    FILE *fp ;

    char name[100];
    int age;

      printf("Enter your name and age\n");
      scanf("%s %d",name,&age);

    fp = fopen("raj.txt","w");
    
        fprintf(fp,"Your Name is %s aged %d",name,age );
        printf("Data Entered in file");
       
    fclose(fp);
    
    return 0;
}
