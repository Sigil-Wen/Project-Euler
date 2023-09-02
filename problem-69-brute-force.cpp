// would take forever to run
#include <iostream>

// highly unoptimized - too slow, will take forever to complete
int totient(int n) {
    int count = 1;
    
    std::vector<int> divisors;

    for (int i = 2; i < n; i++ ) {

        if (n % i != 0) { // if its divisible
            //figure out if they share a prime factor

            bool isFactor = false;

            for (int j = 0; j < divisors.size(); j++) {
                if (i % divisors[j] == 0) {
                    isFactor = true;
                }
            }

            if (isFactor) {
                divisors.push_back(i);
            } else {
                count ++;
            }
 
        } else {
            divisors.push_back(i); // adds to divisors
        }
    }

    return count;
} 

int main() {

    int i;
    double greatest = 0;

    for (i = 6; i <=1000000; i++) {

        double val = (double) i / (double) totient(i);

        if (greatest < val) {

            greatest = val;

        } 
        std::cout << "n/torient for " << i << " is " << val << std::endl;
    }
}
