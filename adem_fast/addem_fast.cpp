//addem_fast assignment
#include <iostream>
#include <string>
#include <random>
#include <chrono>

int main (int argc, char argv []){
    if (argc != 3) { //2 arguments
        std:: cout << "Usage: ./addem_fast.exe <name> <seconds>" << std::endl;
        return 1;
    
    }
    std::string name = argv[1] ; //The Game
    std:: minstd_rand gen(name.length()); //Random Numbers
    auto start  = std::chrono::steady_clock::now(); //






}








    std::string name = argv[] ;
    int firstnumber = name.length();
    int secondnumber = (firstnumber +13)/7;
    int totalsum = firstnumber + secondnumber; 


    std::cout << "Hello " << name << " what is ";
    std::cout << firstnumber << "+" << secondnumber << std::endl;

    int answer; 
    std:: cin >> answer;
    if (answer ==  totalsum){
        std::cout << "Correct " << name << "!" << std::endl;
    } else {
        std::cout << "No " << name << ", it is ";
        std::cout << totalsum << "." << std ::endl;
    }
    return 0;
    std::cout << "No ";

}