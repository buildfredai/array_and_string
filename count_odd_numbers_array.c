//to count odd number using array
#include<stdio.h>
int main(){
    int arr[5],count=0;
    for(int i =0;i<5;i++){
        printf("Input %d: ", i+1);
        scanf("%d", &(arr[i]));
    }
    for(int i =0; i<5;i++){
        if((arr[i])%2!=0){
            count ++;
        }
    }
    printf("Odd number = %d\n",count);
}