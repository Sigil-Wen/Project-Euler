// Spirals

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {

    int layers = 500; // (1001 - 1 )/2
    int count = 1;
    int previous = 1;


    for (int i = 1; i <= layers; i++) {

        for (int j = 0; j < 4; j++) {
            previous += i * 2;
            count += previous;
        }
    }

    printf("Final count: %d\n", count);

}

// Final prime: 669171001, found in 0.594 seconds