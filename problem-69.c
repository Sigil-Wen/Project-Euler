#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Alright my other solutions are taking FOREVER TO COMPUTE. Let's assume that the highest torient will have the most factores and is the largest number, thus logically it should be the largest value under 1 million that is a product of the smallest primes

bool is_prime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Use 6k +/- 1 rule to test for primality
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }

    return true;
} // ChatGPT optimized prime determining algorithm

int main() {

    int n = 1;

    for (int i = 1; n < 1000000; i++) {
        if (is_prime(i)) {
            n *= i;
            printf("n is now %d and prime is %d", n, i);
        }
    }
    return n;
}

// 510510 (NICE) calculated in 0.507 seconds