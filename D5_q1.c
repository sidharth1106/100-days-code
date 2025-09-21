#include<stdio.h>
#include<math.h>
//simple and compund interest//
int main() {
    int p ,r,t,n;
    printf("enter your principal amt\n");
    scanf("%d",&p);
    printf("enter your rate\n");
    scanf("%d",&r);
    printf("enter your time in years");
    scanf("%d",&t);
    printf("enter your n");
    scanf("%d",&n);
    float si= (p*r*t)/100;
    float ci= p * pow((1 + r / n), n * t);
    printf("%0.2f\n",si);
    printf("%0.2f\n",ci);
    return 0;
}