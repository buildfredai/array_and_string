#include<stdio.h>
int main()
{
    int count=0;
    char a[50];
    gets(a);
    for(int i=0;a[i] != '\0';i++){
        count++;
    }
    printf("%d",count);
    printf("\n");
}