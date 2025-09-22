#include <stdio.h>

int main() {
    float a, b;
    char c;

    printf("Enter your numbers: ");
    scanf("%f %f", &a, &b);  

    printf("Operator (+, -, *, /, %%): ");
    scanf(" %c", &c);  

    switch (c) {
        case '+':
            printf("Result: %f\n", a + b);
            break;
        case '-':
            printf("Result: %f\n", a - b);
            break;
        case '*':
            printf("Result: %f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %f\n", a / b);
            else
                printf("Error: Cannot divide by zero.\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("Result: %d\n", (int)a % (int)b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}