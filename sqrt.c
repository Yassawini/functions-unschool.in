//C program for sqrt() function//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,sqroot;
    printf("Enter the number\n");
    scanf("%f",&n);
    sqroot=sqrt(n);
    printf("square root of %f is :%f",n,sqroot);
    return 0;
}
