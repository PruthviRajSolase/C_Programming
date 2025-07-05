#include <stdio.h>


int main()

{
    FILE *fp;

    fp = fopen("raj.txt","a");
    {
      char input[100];

      printf("Enter the text : ");
      gets(input);

      fputs(input,fp);
      printf("Text added");
        
        fclose(fp);
    }
 
    
    return 0;
}
