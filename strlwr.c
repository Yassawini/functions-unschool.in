//C program for strlwr() function//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Enter the string\n");

    gets(str);
    printf("The strlwr() is:%s",strlwr(str));
    return 0;
}
