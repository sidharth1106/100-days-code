#include<stdio.h>
int main() {
    int a;
    printf("enter radius\n");
    scanf("%d",&a);
    printf("perimeter of circle is %0.2f \n",2*3.14*a);
    printf("area of circle is %0.2f\n", 3.14*a*a );
    return 0;
}