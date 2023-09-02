#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    for(i=1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Sum of all numbers divisible by 3 and 5 under 1000: %d\n", sum);

    return 0;
}

// Sum of all numbers divisible by 3 and 5 under 1000: 233168