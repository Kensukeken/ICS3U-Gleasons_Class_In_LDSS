#include <stdio.h>

int main() {
    printf("Welcome to Calculator\n");
    double num1, num2;

    printf("Enter the first number:\n");
    scanf("%lf", &num1);

    printf("Enter the second number:\n");
    scanf("%lf", &num2);

    printf("calculating...\n");
    printf("%.2lf+%.2lf=%.2lf\n", num1, num2, num1 + num2);
    printf("%.2lf-%.2lf=%.2lf\n", num1, num2, num1 - num2);
    printf("%.2lfx%.2lf=%.2lf\n", num1, num2, num1 * num2);
    printf("%.2lf/%.2lf=%.2lf\n", num1, num2, num1 / num2);

}
