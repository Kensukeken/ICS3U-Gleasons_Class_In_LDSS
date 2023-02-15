#include <stdio.h>

int main() {
    printf("Welcome to Calculator\n");
    double num1, num2; // use double instead of int for decimal values

    printf("Enter the first number:\n");
    scanf("%lf", &num1);

    printf("Enter the second number:\n");
    scanf("%lf", &num2);

    printf("Calculating...\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    printf("%.2lf x %.2lf = %.2lf\n", num1, num2, num1 * num2);
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);

    return 0; // indicate successful program execution
}
