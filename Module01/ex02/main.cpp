#include <iostream>


int main (void){
    std::string string;
    std::string  *stringPTR;
    std::string &stringREF = string;

    string = "HI THIS IS BRAIN";
    stringPTR = &string;
    std::cout <<"string address: " << &string << std::endl;
    std::cout <<"stringPTR address: " << stringPTR << std::endl;
    std::cout <<"stringREF address: " << &stringREF << std::endl;
    std::cout <<"stringPTR string: " << *stringPTR << std::endl;
    std::cout <<"stringREF string: " << stringREF << std::endl;

    return (0);
}
