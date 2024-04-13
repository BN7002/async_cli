#include "other.hpp"
#include "cli.hpp"
#include <future>
#include <vector>
/*
    
    https://stackoverflow.com/questions/13669094/how-to-use-stdasync-on-a-member-function

*/
int main(){
    
    std::vector<std::future<void>> futures_;

    CLI *cli_ptr = new CLI();
    CLI cli;
    futures_.push_back(std::async(std::launch::async, print_));
    futures_.push_back(std::async(std::launch::async, &CLI::listen, *cli_ptr));
    futures_.push_back(std::async(std::launch::async, &CLI::listen, cli));
    void (CLI::*functionPointer) () = &CLI::listen;
    std::cout << "\nval" << functionPointer << "\tref:" << &functionPointer << "\t" << "\n" << std::flush;
    return 0;
}