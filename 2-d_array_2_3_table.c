#include<stdio.h>
int main(){
    int arr [2][10];
    for(int i = 0 ; i < 2 ; i++){
        for( int j=0 ; j < 10 ; j++){
            arr[i][j] = (i+2)*(j+1);
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        for( int j = 0 ; j < 10 ; j++){
            printf("%d * %d = %d\n",i+2,j+1,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}