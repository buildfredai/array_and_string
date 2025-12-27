#include<stdio.h>
#include
int main(){
    int aadhar[5];
    int *ptr = &aadhar[0];

    for(int i=0 ; i < 5; i++){
        printf("Input %d: ", i+1);
        scanf("%d",(ptr+i));
    }
    for(int i =0;i<5;i++){
        printf("Output %d: %d\n",i+1,*(ptr+i));
    }
    return 0;
}