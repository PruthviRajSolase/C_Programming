#include <stdio.h>

#define CHECK(number) do { \
    if ((number) >= 20) \
        printf("The number is greater than or equal to 20\n"); \
    else \
        printf("The number is smaller than 20\n"); \
} while(0)

int main()
{
    CHECK(18);
    return 0;
}
