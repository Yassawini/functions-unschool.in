//C program for strupr()//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter the string\n");
    gets(str);
    printf("the strupr()is:%s",strupr(str));
    return 0;

}
