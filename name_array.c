//print name 
#include<stdio.h>
int main()
{
    char name[7];
    for(int i=0; i<7;i++){
        printf("Enter characters: ");
        scanf("%s",&name[i]);
    }
    for(int i=0; i<1; i++){
        printf("%s",name);
    }
    printf("\n");
}