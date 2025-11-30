//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int num;
    int perfect = 0;
    printf("Enter Number: ");
    scanf("%d",&num);
    for (int i = 1; i < num; i++){
        if (num % i == 0)
        perfect = perfect + i;
        }
    if (num == perfect){
        printf("The Given Number %d is perfect.", num);
    }
     else 
        printf("The Given Number is not Perfect");
    return 0;
}