#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];
    printf("Enter name: ");
    gets(a);
    strcpy(b,a);

    printf("%s\n",b);
}