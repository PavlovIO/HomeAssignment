#include "header.h"


std::string get_file(){
    std::string* f_name;
    std::cout << "Input the name of your file:";
    std::cin >> f_name;
    return f_name;
}
