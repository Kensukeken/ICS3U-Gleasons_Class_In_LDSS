#include <stdio.h>

int main() {
    printf("Welcome to Calculator\n");
    int num1, num2;

    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("Calculating...\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d x %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2lf\n", num1, num2, (float)num1 / num2);
  
}
