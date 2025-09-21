#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("enter cost price : ");
    scanf("%d",&a);
    printf("enter selling price : ");
    scanf("%d",&b);
    c=a-b;
    d=b-a;
    f=(c/a)*100;
    e=(d/a)*100;
    if(a<b){
        
        printf("profit %0.2f",e);
    }
    else{
        
        printf("loss %0.2f",f);
    }

    return 0;
}