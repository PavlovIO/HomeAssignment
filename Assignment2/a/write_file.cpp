/* Ilya Pavlov st129535@student.spbu.ru
	assignment2a
*/
#include "header.h"

void write_file(char* inlist, int size){
    std::ofstream outfile("outfile", std::ios::binary); 
    
    
    outfile.write((char *)inlist, size);
    outfile.close();
    delete[] inlist;
    inlist = nullptr;
    }
