#include "header.h"

char read_file(std::string* file){

    std::ifstream infile;
    infile.open(file, std::ios:binary | std::ios::in);
    
    size = std::filesystem::file_size(file);
    char* inlist = new char[size];
    
    infile.read(inlist, size);
    
    infile.close();
    
    return inlist;

}
