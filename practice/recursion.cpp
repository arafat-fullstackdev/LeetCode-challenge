#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: This stops the recursion
    if (n == 0) {
        return 1;
    }
    // Recursive step: The function calls itself
    else {
        return n * factorial(n - 1);
    }
}

//febonacci
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive step
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number = 5;
    std::cout << "The factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}