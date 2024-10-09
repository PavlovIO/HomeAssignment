#include "header.h"


int main(){
    std::string name = get_file();
    
    char* list;
    int size;
    
    list = read_file(name,size);
    
    write_file(list, size);

}

