#include <stdio.h>
//to sum n numbers//
int main() {
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int sum=(n*(n+1))/2;
    printf("sum of n numbers is %d",sum);

    return 0;
}