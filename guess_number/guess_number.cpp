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
    guess(0, max_num);
    }

//SECOND PART IF NUMBER NOT BELOW ZERO
void guess(int lowest, int highest) {//determining the guess
int middle = (lowest + highest) / 2
std::cout << "Is it <guess>?"

string input;
std::cin >> input;

if (!cin)
{
    return;
}

if (input == "=") {
    std::cout << "I win!" << std::endl; // If the answer is guessed correctly
}
else if (input == "<"){
    guess(lowest, middle - 1);
}
else if (input == ">") {
    guess(middle + 1, highest);
}
else{
    std::cout << "Please enter <, >, or =" << std::endl; //this is for unvalid inputs
guess(lowest, highest);
}
}

int main () {
    
    //
    //
}
