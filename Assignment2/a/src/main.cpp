/* Ilya Pavlov st129535@student.spbu.ru
	assignment2a
*/
#include "header.h"


int main(){
    std::string name = get_file();
    
    char* list;
    int size;
    
    list = read_file(name,size);
    
    std::cout << list << std::endl;
    
    write_file(list, size);

}

