#include<stdio.h>
int main()
{
    int a[5],even=0;
    for(int i=0;i<5;i++){
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            even++;
        }
    }
    printf("%d numbers are even.\n",even);
}