
#include "cli.hpp"
#include <iostream>

int CLI::numInstances = 0;
CLI::CLI(){
    this->numInstances++;
    instanceNum = numInstances;
}

CLI::~CLI(){
    CLI::numInstances--;
}

void CLI::listen(){
    std::cout << "\n Instance number : " << instanceNum << "\n" << std::flush;
    std::string input;
    std::cin >> input;
    std::cout << "\n" << instanceNum << ". You wrote this: "<< input << "\n" << std::flush;
    if(input == "help"){
        std::cout << "\n" << instanceNum << ". You invoked help command\n Commands:\n help \t - showing help" << "\n" << std::flush;
    }
    listen();
    return;
}