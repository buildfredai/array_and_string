#include<stdio.h>
int main(){
    int arr [2][10];
    for(int i = 0 ; i < 2 ; i++){
        for( int j=0 ; j < 10 ; j++){
            printf("%d * %d = ", i+2,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < 2 ; i++){
        for( int j = 0 ; j < 10 ; j++){
            printf("%d * %d = %d\n",i+2,j+1,arr[i][j]);
        }
    }
    return 0;
}