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
    int seconds = std::stoi(argv[2]) ; // Second Argument
    int correctnumber = 0;
    bool firstquestion = true;

    while(true) {
        int firstnumber;
        int secondnumber;
       
        if (firstquestion) {
            firstnumber = name.length();
            secondnumber = (firstnumber +13) % 7;
            firstquestion = false;

        }else {
            firstnumber = gen() % 100;
            secondnumber = gen() % 100;
        }
        int totalsum = firstnumber + secondnumber;
        
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
        std::cout << "Correct " << name << "!" << std::endl;
        correctnumber++;
        std::chrono::duration<double> elapsed = std::chrono::steady_clock::now() - start;
        
        if (elapsed.count() > seconds) {
            break;
        }
    }
        std::cout << "You got " << correctnumber << " correct!" << std::endl;

    return 0;
}