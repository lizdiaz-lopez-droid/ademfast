//addem_fast assignment
#include <iostream>
#include <string>
#include <random>
#include <chrono>

int main (int argc, char* argv[]){
    if (argc != 3) { //2 arguments
        std:: cout << "Usage: ./addem_fast.exe <name> <seconds>" << std::endl;
        return 1;
    }
    std::string name = argv[1] ; //The Game | First Argument
    std:: minstd_rand gen(name.length()); //Random Numbers
    auto start  = std::chrono::steady_clock::now(); //Timing
    int seconds = argv[2] ; // Second Argument
    int correctnumber = 0;
    bool firstquestion = true;

    While(true) {
        int firstnumber;
        int secondnumber;
        int totalsum = firstnumber + second number;

        if (firstquestion) {
            int firstnumber = name.length();
            int secondnumber = (firstnumber +13)%7;
            int firstquestion = false;

        }else {
            firstnumber = gen() % 100;
            secondnumber = gen() % 100;
        }

        std::cout << "Hello " << name << "what is ";
        std::cout << firstnumber << "+" << secondnumber << std::endl;
        
        int answer;
    
        if (!(std::cin >>answer)) {
            break;
        }
        
        if (answer != totalsum ) {
            std::cout << "No " << name << ", it is ";
            std::cout << totalsum << "." << std::endl;
            break;
        }
        std::cout << "Correct " << name << "!" <<endl;
        correctnumber++;
        std::chrono::duration<double> elapsed = std::chrono::steady_clock::now() - start;
        
        if (elapsed.count() > seconds) {
            break;
        }
        std::cout << "You got " << correctnumber << " correct!" << std::endl;

    return 0;
}