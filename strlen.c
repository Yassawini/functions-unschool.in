// C program for strlen()//
#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int length;
    printf("enter the string\n");
    gets(string);
    length=strlen(string);
    printf("length of the string=%d\n",length);
    return 0;
}
