#include <assert.h>
#include <stdio.h>
#include "calculator.h"

int main() {
    double num1 = 15.3;
    double num2 = -32.9;
    double num3 = 0.0;
    double num4 = 2.0;
    double num5 = 3.0;
    double num6 = 4.0;

    // Adding test
    assert(add(num1, num2) == num1 + num2);

    // Subtract test
    assert(subtract(num1, num2) == num1 - num2);

    // Multiply test
    assert(multiply(num1, num3) == num1 * num3);

    // Divide tests
    assert(divide(num1, num2) == num1 / num2);
    assert(divide(num1, 0) == 0);

    // Pow test
    assert(pow(num4, num5) == 8.0);
    assert(pow(num2, 0) == 1.0);

    // Square root test
    assert(sqrt(num6) == 2);
    assert(sqrt(0) == 0);

    printf("Done!");
}
