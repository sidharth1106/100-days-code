//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include<math.h>
int main(){
    int num , n=0,temp,left, right, swap, middle;
    printf("Enter your Number: ");
    scanf("%d",&num);
    //to know how many digits are there in the number
    temp = num; 
    while(temp !=0){
    temp = temp/ 10;
    n++;}
    //to get the left most digit
    left = num/pow(10,n-1);
    //to get the right most digit
    right = num%10;
    middle = num%(int)pow(10,n-1);
    middle/=10;
    swap = right*pow(10, n-1)+middle*10+left;
    printf("Swapped number is %d", swap);
    return 0;
}