/* Ilya Pavlov st129535@student.spbu.ru
	assignment2b
*/
#include "header.h"

std::string* str_form(const std::string& s, int& len){
    int spaces = 0;
    
    for(int i = 0; i<s.length();i++){
        if (s[i] == ' '){
            spaces++;  
        }
    }
    
    std::string* s_form = new std::string[spaces+1];
    int k = 0;
    std::string temp = "";
    for (int i = 0; i<s.length();i++){
        if (s[i] == ' '){
            if(temp != ""){
                s_form[k] = temp;
                k++;
            }
            temp = "";
            continue; 
        }else{
            temp = temp+s[i];
        }
    }
    if(temp != ""){
        s_form[k] = temp;
    }
    len++;
    len+=k;
    return s_form;
}
