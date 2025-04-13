// arithmetic.c
#include "arithmatic.h"
#include <stdio.h>

/**
 * @brief Adds two numbers
 * @param a First operand
 * @param b Second operand
 * @return Result of a + b
 */
double add_numbers(double a, double b) {
    return a + b;
}

// Example usage in main function
int main() {
    double result = add_numbers(10.5, 20.3);
    printf("10.5 + 20.3 = %f\n", result);
    return 0;
}