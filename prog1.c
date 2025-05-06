Here's a simple C program to perform division:
#include <stdio.h>

int main() {
    float num1, num2, result;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Checking for division by zero
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    } else {
        printf("Error! Division by zero is not allowed.");
}
return 0;
}
