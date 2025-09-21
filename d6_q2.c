#include<stdio.h>
//to check number using nested if else//
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }
    else if (n<0)
    {
        printf("negative");
    }
    else{
        printf("0");
    }
  
    
    return 0;
}