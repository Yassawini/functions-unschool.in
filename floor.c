//C program for floor() function//
#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    int result;
    printf("Enter the number\n");
    scanf("%f",&num);
    result=floor(num);
    printf("floor integer of %f =%d",num,result);
    return 0;
}
