#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int fac=1;
    for(int i=n;i>=1;i--){
        fac=fac*i;
    }
    printf("%d",fac);
    return 0;
}