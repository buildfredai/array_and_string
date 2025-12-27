#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];
    printf("Enter first name: ");
    gets(a);
    printf("Enter last name: ");
    gets(b);

    strcat(a, " ");
    strcat(a,b);
    printf("%s \n",a);
}