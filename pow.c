//C program for pow() function//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,power;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the power of the number\n");
    scanf("%d",&p);
    power=pow(n,p);
    printf("%d rise to the power %d is:%d",n,p,power);
    return 0;
}
