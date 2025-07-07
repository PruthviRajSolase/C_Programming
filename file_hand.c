#include <stdio.h>


int main()

{
    FILE *fp;

    fp = fopen("raj.txt","a");
    {

        char ch;
      ch = fgetc(fp); 
        
        fclose(fp);
    }
 
    
    return 0;
}
