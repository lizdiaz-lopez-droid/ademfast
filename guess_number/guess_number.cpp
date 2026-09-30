#include <iostream>
#include <string>
#include <random>

// FIRST RETURN OR OUTPUTS
int main (int argc, char* argv[]) {
    int number;
    std::cin >> number;
    if (number < 1 ) {
        std::cout << "Usage: ./guess_number.exe <number>" << std::endl; //may asume that the argument is a whole number
        return 1;
    }

    int max_num = std::stoi(argv[]);
    if (max_num < 1) {
        std::cout << "Usage: ./guess_number.exe <number>" << std::endl;
        return 1;
    }

    int max_guess = 1;
    int num_size = max_num + 1; //"<number> + 1"

    while (num_size > 1) {
        num_size = num_size /2;
        max_guess++;
    }

    std::cout << "Pick a number between 0 and <number>. I will guess it in at most <maximum> tries!" //Initial question asked
    
    }

//SECOND PART IF NUMBER NOT BELOW ZERO
int main () {
    
    //std::cout << "Is it <guess>?"
    //std::cout << "I win!" // If the answer is guessed correctly
}
