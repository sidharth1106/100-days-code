#include<stdio.h>
//check if even or odd using if-else//
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even");

    }
    else{
        printf("number is odd");
    }
    return 0;
}