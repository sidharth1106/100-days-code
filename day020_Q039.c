//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main(){
    int n, digit, product = 1 ,isOdd = 0 ;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!= 0){
        digit = n %10;
        if(digit % 2 != 0){
                product *= digit;
                isOdd =1;
        }
        n =n/10;
    }
    if (isOdd){
        printf("Product of odd digits is %d.\n", product);
    }
    else
    printf("No odd digits");
    return 0;
}