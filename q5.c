#include<stdio.h>
int main() {
    int c;
    printf("enter your temperature \n");
    scanf("%d",&c);
    int f = (c * 9/5)+32;
    printf("temp in farhenheit is %d \n",f);

    return 0;
}
