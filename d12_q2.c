#include<stdio.h>
int main(){
    int a;
    printf("enter units : ");
    scanf("%d",&a);
    if(a<=100){
        printf("bill is %d",a*5);
    }
    else if (a>100 && a<=200){
        printf("Bill is %d",100*5+(a-100)*7);
    }
    else if (a>200 && a<=300){
        printf("Bill is %d",1200+(a-200)*10);
    }
    else{
        printf("Bill is %d",2200+(a-300)*12);
    }
    
    
    return 0;
}