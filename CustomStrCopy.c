#include <stdio.h>

char Result[] StringCopy(const char *str[])
{
   //char Result;
   Result = *str[];
    return Result;
}

int main()
{
    char inputStr[100];
    char outputStr[100];
    printf('Enter input string \n');
    scanf('%s', &inputStr);
    outputStr = StringCopy(&inputStr);
    printf('copied string is \n');
    printf('%s',outputStr);
    return 0;
}
