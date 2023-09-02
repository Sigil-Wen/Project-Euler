#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    if (n < 0) return false;  // Negative numbers aren't considered palindromes

    int reversed = 0;        // To hold the reversed number
    int original = n;        // Save the original number for comparison later

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int i;
    int j;
    int largest_palindrome = 0;

    for (i=100; i <=999; i++) {
        for (j=100; j <=999; j++) {
            if (is_palindrome(i*j)) {
                if (i*j > largest_palindrome) {
                    largest_palindrome = i*j;
                }
            }
        }
    }

    printf("Complete! Largest palindrome is: %d\n", largest_palindrome);

    return 0;
}

// Answer: 906609, 0.38 seconds to compute