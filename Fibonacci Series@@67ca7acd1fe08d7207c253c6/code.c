#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int terms) {
    int a = 0, b = 1, next;
    
    for (int i = 0; i < terms; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int terms;

    // Get user input
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    fibonacci(terms);

    printf("\n");
    return 0;
}