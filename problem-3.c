#include <stdio.h>

int main() {
    int divisor = 2;
    long int number = 600851475143;
    int largest_prime = 0;

    while (number != 1) {
        if (number % divisor == 0) {
            number /= divisor;
            printf("One of the primes is: %d\n", divisor);
            if (divisor > largest_prime) {
                largest_prime = divisor;
            }
        } else {
            divisor ++;
        }
    }

    printf("Complete! Largest prime is: %d\n", largest_prime);

    return 0;
}

// Answer: 6857, 0.389 seconds to compute