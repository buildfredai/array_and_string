#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];
    printf("Enter first name: ");
    gets(a);
    printf("Enter second name: ");
    gets(b);
    
    int result = strcmp(a, b);

    if(result == 0) {
        printf("Strings are equal.\n");
    }
    else if(result < 0) {
        printf("First string comes first alphabetically.\n");
    }
    else {
        printf("Second string comes first alphabetically.\n");
    }

    return 0;
}
