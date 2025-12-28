#include<stdio.h>

//function declaration
void countOdd(int arr[],int n);

int main(){
    int arr[5],n=5;
    for(int i = 0 ; i < 5 ; i++){
        printf("Input %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    countOdd(arr,n);
}

//function definition
void countOdd(int arr[],int n){
    int count=0;
    for(int i = 0 ; i<n;i++){
        if((arr[i])%2!=0){
            count ++;
        }
    }
    printf("Odd number = %d\n", count);
}