#include <stdio.h>
#include <string.h>

// To copy a string in a file 

int main()
{
    FILE *fp;
    
    char str[100] = "I am Pruthviraj";
    int length = strlen(str);

    fp = fopen("raj.txt","w");
    {
        if (fp == NULL)
        {
            printf("File not Found");
        } else{
            for (int i = 0; i < length; i++)
            {
                printf("Character Copied %c\n",str[i]);
                fputc(str[i],fp);
                
            }
            printf("String Entered Successfully\n");
        }
        
          
    fclose(fp);
}


    
    return 0;
}
