#include <iostream>
#include <random>
#include <cstdlib> // Required for rand() and srand() functions
#include <ctime>   // Required to seed the random number generator
using namespace std;
int main() {
    srand(time(0));
    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
