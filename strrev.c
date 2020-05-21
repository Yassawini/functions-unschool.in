//C programming for strrev() function//
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("enter the string\n");
    scanf("%s",name);
    printf("string before strrev():%s\n",name);
    printf("string after strrev():%s",strrev(name));
    return 0;
}
