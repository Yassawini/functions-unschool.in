//C program for strcmp()//
#include<stdio.h>
#include<string.h>
int main()
{
    char strng1[10],strng2[10];
    printf("enter the first string\n");
    gets(strng1);
    printf("enter the second string\n");
    gets(strng2);
    if(strcmp(strng1,strng2)==0)
    {
        printf("the strings are same");
    }
    else
    {
        printf("strings are not same");
    }
    return 0;
}
