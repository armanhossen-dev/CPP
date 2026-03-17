#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main(){
    // pseudo-randoms  not truly random (but close)
    //mayb e i make a 'Roll Dice Game' , then generate some random number so learn it
    //random number generator , funciton srand

    // Seed the random number generator with the current time
    srand(time(NULL));
    int num = rand();
    std::cout<< num;

    // Generate a random number between 1 and 6
    //int num = (rand() % 6 )+ 1;
    //std::cout << "Random number (1-6): " << num << std::endl;
    
    //if i want a random number between 1-100
    // i have to do this
    //int num = (rand() % 100)+1;

    std::cout << '\n';
    //for 3 dice and random number, between 1-6;
    int num1 = (rand() % 6 ) + 1;
    int num2 = (rand() % 6 ) + 1;
    int num3 = (rand() % 6 ) + 1;

    std::cout<< num1 << ", " //if more than 1 char i have to use Double quotes ""
             << num2 << ", "
             << num3 << '\n';

    return 0;
}