#include<stdio.h>
int main(){
    int n;
    printf("enter value : ");
    scanf("%d",&n);
    int prod=1;
    for(int i=2;i<=n;i=i+2){
        prod=prod*i;
        
    }
    printf("%d",prod);
    return 0;
}