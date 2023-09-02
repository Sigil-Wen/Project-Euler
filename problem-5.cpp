// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
// Solving this requires getting all the prime factors 

#include <iostream>
#include <vector>


int main() {

    std::vector<int> dynamicArray;

    int product;
    int i;
    int number = 1;

    dynamicArray.push_back(1);

    for (i = 1; i <=20; i++) {

        number = i;
        
        for (int j = 0; j < dynamicArray.size(); j++) {
             if (number % dynamicArray[j] == 0) {
                number /= dynamicArray[j];
             }
        }

        if (number != 1) {
            dynamicArray.push_back(number);

            std::cout << "Adding a prime factor: " << number << std::endl;

        }
    }

    for (i = 0; i < dynamicArray.size(); i++) {
        product *= dynamicArray[i];
    }

    std::cout << "Smallest number: " << product << std::endl;

}

// Answer: 232792560 in 0.718 seconds 