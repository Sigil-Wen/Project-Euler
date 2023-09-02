// slightly more optimized - would take a few hours
#include <iostream>

// Function to compute the greatest common divisor of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Euler's Totient function
int phi(int n) {
    int result = 1;
    for (int i = 2; i < n; i++) {
        if (gcd(i, n) == 1) {
            result++;
        }
    }
    return result;
}

int main() {

    int i;
    double greatest = 0;
    int great_index = 1;

    for (i = 206803; i <=1000000; i++) {

        double val = (double) i / (double) phi(i);

        if (greatest < val) {

            greatest = val;
            great_index = i;

        } 
        std::cout << "n/torient for " << i << " is " << great_index << " at " << greatest << std::endl;
    }
}