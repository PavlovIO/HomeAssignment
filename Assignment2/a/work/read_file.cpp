#include "header.h"

char* read_file(const std::string& file,int &size){

    std::ifstream infile;
    infile.open(file, std::ios::binary | std::ios::in);
    
    size = std::filesystem::file_size(file);
    char* inlist = new char[size];
    
    infile.read(inlist, size);
    infile.close();
    

    
    for (int i = 0; i<size/2; i++){
        std::swap(inlist[i],inlist[size-i-1]);
    }
    

    
    return inlist;

}
