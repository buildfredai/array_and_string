#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the base price of Pizza: ");
    scanf("%f",&price[0]);

    printf("Enter the base price of Sandwich: ");
    scanf("%f",&price[1]);

    printf("Enter the base price of Burger: ");
    scanf("%f",&price[2]);

    printf("The price of Pizza including GST is: %.2f\n",price[0]+(price[0]*0.18));
    printf("The price of Sandwich including GST is: %.2f\n",price[1]+(price[1]*0.18));
    printf("The price of Burger including GST is: %.2f\n",price[2]+(price[2]*0.18));

    return 0;
}