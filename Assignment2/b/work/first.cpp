#include "header.h"
int main(){
	std::string ps;
	std::cout << "Input your equation:";
	std::getline(std::cin, ps);

	std::cout<<ps<<std::endl;
	* stack = new int[ps.length()];
	int k = 0;

	for (int i = 0; i<ps.length(); i+=2){
	    if (isdigit(ps[i])){
		stack[k] = ps[i]-'0';
		k++;
	    }else{
	        if (k<2){
	            std::cout << "Not enough operands";
                    delete[] stack;
                    return 0;
	        }
		switch(ps[i]){
		    case '+':
		        stack[k-2] = stack[k-2]+stack[k-1];
		        k--;
		        break;
		    case '-':
		        stack[k-2] = stack[k-2]-stack[k-1];
		        k--;
		        break;
		    case '*':
		        stack[k-2] = stack[k-2]*stack[k-1];
		        k--;
		        break;
		    case '/':
		        if (stack[k] == 0){
		            std::cout << "Division by 0";
		            delete[] stack;
		            return 0;
		        }
		        stack[k-2] = stack[k-2]/stack[k-1];
		        k--;
		        break;
		    default:
		        std::cout << "Wrong operator";
		        delete[] stack;
		        return 0;
		}
	    }
	    
	}
	std::cout << "Result: "<< stack[0]<<std::endl;
	delete[] stack;
	return 0;
}
