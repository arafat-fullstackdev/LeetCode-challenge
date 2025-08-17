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

int main() {
    int number = 5;
    std::cout << "The factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}