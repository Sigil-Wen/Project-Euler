//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <stdio.h>

int main() {
    long int sum_of_squares = 0;
    long int sum = 0;
    for (int i = 1; i <=100; i++) {
        sum += i;
        sum_of_squares += i*i;
    }

    printf("Complete! Difference is is: %ld\n", (sum*sum - sum_of_squares));

}

// Answer is 25164150, computed in 0.423 seconds :)