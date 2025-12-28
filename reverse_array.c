#include<stdio.h>
int main(){
    int arr[6],n=6;

    for(int i = 0;i<6;i++){
        printf("Input %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n/2 ; i++){
        int f = arr[i];
        int l = arr[n-i-1];
        arr[i] = l;
        arr[n-i-1] = f;
    }
    for(int i = 0 ; i<6 ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}