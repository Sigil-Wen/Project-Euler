// What is the 10001st prime number?

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int number) {
    double root = sqrt(number);
    int largest_possible_factor = floor(root);

    for (int i = 3; i <= largest_possible_factor; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int num = 3; // start at 3
    int prime_count=1;

    while (prime_count != 10001) {

        if (is_prime(num)) {
            prime_count++;
            printf("Found the %d prime: %d\n", prime_count, num);
        }
        num += 2; // don't need to include even numbers
    }

    printf("Final prime: %d\n", (num - 2));

}

// Final prime: 104743, found in 0.459 seconds