#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 50;
    marks[0][1] = 80;
    marks[0][2] = 68;
    marks[1][0] = 48;
    marks[1][1] = 34;
    marks[1][2] = 67;

    for(int i =0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d \t",marks[i][j]);
        }
        printf("\n");
    }
    
}