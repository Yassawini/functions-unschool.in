//C program for strcpy() function//
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    char str2[19];
    printf("enter the first string\n");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("the string 2 is:%s",str2);
    return 0;
}
