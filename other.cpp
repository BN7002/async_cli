#include "other.hpp"
#include <chrono>
#include <iostream>
#include <thread>

using namespace std::chrono_literals;
void print_(){
    print_bar(print_type::first_envoke);
    while(1){
        print_bar(print_type::envoke);
    }
};
void print_bar(print_type type){
    int8_t len = 10;
    switch(type){
        case print_type::first_envoke:
            std::cout << "\n";
            bar(len, false);
            bar(len, true);
        case print_type::envoke:
            bar(len, false);
            bar(len, true);
    } 
}
void bar(int8_t len, bool removingFill){
    if(!removingFill){
        for(int8_t h = 0; h < len; h++){
            std::this_thread::sleep_for(100ms);
            std::cout << "\r[";
            
            for(int8_t i1 = 0; i1 < h; i1++){
                std::cout << "#";
            }
            
            for(int8_t i2 = 0; i2 < len-h; i2++){
                std::cout << " ";
            }
            std::cout << "]" << std::flush;
            std::this_thread::sleep_for(10ms);
        }
        return;
    }
    for(int8_t h = 0; h < len; h++){
        std::this_thread::sleep_for(100ms);
        std::cout << "\r[";
        
        for(int8_t i1 = 0; i1 < len-h; i1++){
            std::cout << "#";
        }
        
        for(int8_t i2 = 0; i2 < h; i2++){
            std::cout << " ";
        }
        std::cout << "]" << std::flush;
        std::this_thread::sleep_for(10ms);
    }
    return;

}