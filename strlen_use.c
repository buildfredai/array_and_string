#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    gets(a);
    int len = strlen(a);
    printf("Number of characters in your name is: %d\n",len);
}