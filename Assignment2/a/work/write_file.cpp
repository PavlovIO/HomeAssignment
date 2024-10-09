
#include "header.h"

void write_file(char* inlist, int size){
    std::ofstream outfile("outfile.txt", std::ios::binary); 
    
    
    outfile.write((char *)&inlist, size);
    delete[] inlist;
    inlist = nullptr;
    }
