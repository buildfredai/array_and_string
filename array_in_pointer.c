#include<stdio.h>
int main(){
    int age [5] = {34,32,35,56,76};
    int *ptr = &age;

    printf("%u\n",ptr);
    ptr ++;
    printf("%u\n",ptr);
    ptr ++;
    printf("%u\n",ptr);
    ptr ++;
    printf("%u\n",ptr);
    ptr ++;
    printf("%u\n",ptr); 
    
}