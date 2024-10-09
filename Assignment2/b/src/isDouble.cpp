/* Ilya Pavlov st129535@student.spbu.ru
	assignment2b
*/
#include "header.h"

bool isDouble(const std::string& str) {
    bool dot = false;
    for (char c : str) {
        if (!isdigit(c)) {
            if (c == '.' && !dot) {
                dot = true; 
            } else{
                return false; 
            }
        }
    }
    return true; 
}
