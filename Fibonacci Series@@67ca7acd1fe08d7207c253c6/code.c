#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    // Get user input
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    
    // Print Fibonacci series
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
