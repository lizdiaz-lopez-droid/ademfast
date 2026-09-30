#include <iostream>
#include <string>
#include <random>

int main (int argc, char* argv[]) {
    int number;
    std::cin >> number;
    if (number < 1 ) {
        std::cout << "Usage: ./guess_number.exe <number>" << std::endl; //may asume that the argument is a whole number
        return 1;
    }
    //<number> + 1



    //std::cout << "Pick a number between 0 and <number>. I will guess it in at most <maximum> tries!" //Initial question asked
    //std::cout << "Is it <guess>?"
    //std::cout << "I win!" // If the answer is guessed correctly
    }

