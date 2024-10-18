/* Ilya Pavlov st129535@student.spbu.ru
	assignment2a
*/
#include "header.h"

char* read_file(const std::string& file,int &size){

    std::ifstream infile;
    infile.open(file, std::ios::binary | std::ios::in);
    
    size = std::filesystem::file_size(file);
    char* inlist = new char[size];
    
    infile.read(inlist, size);
    infile.close();
    
    std::cout << inlist << std::endl;
    
    for (int i = 0; i<size/2; i++){
        std::swap(inlist[i],inlist[size-i-1]);
    }
    
    std::cout << inlist << std::endl;
    
    return inlist;

}
