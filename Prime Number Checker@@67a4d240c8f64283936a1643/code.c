#include <stdio.h>
#include <math.h>

int isPrime(int N) {
    if (N <= 1) return 0;  // 0 and 1 are not prime numbers
    if (N == 2) return 1;  // 2 is the only even prime number
    if (N % 2 == 0) return 0;  // Exclude even numbers greater than 2

    // Check divisibility from 3 to sqrt(N), skipping even numbers
    for (int i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) return 0;
    }
    
    return 1;  // If no divisors were found, it's prime
}

int main() {
    int N = 10;
    printf("Is %d prime? ", N);

    if (isPrime(N)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

