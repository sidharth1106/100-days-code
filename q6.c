#include<stdio.h>
int main() {
    int a,b,c;
    a=2;
    b=5;    
    printf("%d and %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("%d and %d",a,b);
    return 0;
}
