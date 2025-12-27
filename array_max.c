#include<stdio.h>
int main()
{
    int a[5],max;


    for(int i=0; i<5; i++){
        printf("Enter the number: ");
        scanf("%d", &a[i]);
    }
    max =a[0];
    for(int i=1; i<5; i++){
        max = max>a[i]? max:a[i];
    }
    printf("Max = %d\n", max);
}