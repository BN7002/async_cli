#ifndef _CLI_HPP
#define _CLI_HPP
#include <string>


class CLI{
    public:
        static int numInstances; // 0
        CLI();
        ~CLI();
        void listen();       
    private:
        
        int instanceNum;
};
#endif