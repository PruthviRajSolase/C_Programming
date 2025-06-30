#include  <stdio.h>

void swap(int *a,int *b)
{
    int c;

    c = *a + *b;
    *a = c - *a;
    *b = c - *b ;

}

int main()
{
    int x,y;

    printf("Enter x\n");
    scanf("%d",&x);

    printf("Enter y\n");
    scanf("%d",&y);

    swap(&x,&y);

    printf("New value of x and y are %d and %d respectively\n",x,y);

    
    return 0;
}
