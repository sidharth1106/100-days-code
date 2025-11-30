//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, temp, onesComplement = 0, place = 1;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;
    // Process each digit
    while (temp != 0) {
        digit = temp % 10;
        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("I asked for a binary number. Why cant't you just give one?\n");
            return 777;
        }
        onesComplement = onesComplement + digit * place;
        place *= 10;
        temp /= 10;
    }
    printf("1's complement: %lld\n", onesComplement);
    return 0;
}