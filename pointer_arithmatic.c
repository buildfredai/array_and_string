#include<stdio.h>
int main(){
    int age = 19;
    int *ptr = &age;

    printf("ptr = %u\n",ptr);
    ptr --;
    ptr ++;
    ptr --;
    ptr ++;
    ptr --;
    ptr ++;
    ptr --;
    ptr ++;
    ptr --;
    ptr ++;
    
    printf("later ptr = %u\n",ptr);
}