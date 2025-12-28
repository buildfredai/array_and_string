//write a code to print number till user input.

#include<stdio.h>

//function declaration
void printNumbers(int arr[],int n);

int main(){
    int arr[6],n=6;
    for (int i=0;i<6;i++){
        printf("Input %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printNumbers(arr,n);
}

//function definition
void printNumbers(int arr[],int n){
    for(int i = 0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}