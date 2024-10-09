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
