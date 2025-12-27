#include<stdio.h>

    int main(){
        int aadhar[5];

        for (int i = 0; i<5; i++){
            printf("Index %d: ",i+1);
            scanf("%d",&aadhar[i]);
        }

        for(int i = 0; i<5; i++){
            printf("Aadhar %d = %d\n",i+1,aadhar[i]);
        }
    return 0;\
    }
