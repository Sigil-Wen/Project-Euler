#include <stdio.h>

int main() {
    int sum = 2;
    int prev = 1;
    int current = 2;
    int placeholder;

    while (current < 4000000) {
        placeholder = current;
        current += prev;
        prev = placeholder;
        
        if (current %2 ==0) {
            sum += current;
        }
    }

    printf("Sum of all even valued fibbonaci terms with values under 4,000,000: %d\n", sum);

    return 0;
}

// Answer: 4613732