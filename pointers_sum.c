#include<stdio.h>
int main(){
    int age = 22;
    int age2 = 19;
    int *age3 = &age;
    int *age4 = &age2;

    printf("age3 = %u\n",age3);
    printf("age 4 = %u\n",age4);
    printf("age3 - age4 = %u\n",age3-age4);

    age4 = &age;
    printf("comparison = %u\n", age3 == age4);
    
    return 0;
}