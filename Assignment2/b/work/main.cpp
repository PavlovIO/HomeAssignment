#include "header.h"
int main(){
	std::string ps;
	std::cout << "Input your equation:";
	std::getline(std::cin, ps);

	std::cout<<ps<<std::endl;
	
	int len = 0;
	std::string* ps_f;
	ps_f = str_form(ps, len);
	
	std::cout << ps_f<<std::endl;
	std::cout << len<<std::endl;
	
	double* stack = new double[len];
	int k = 0;

	for (int i = 0; i<len; i++){
	    if (isDouble(ps_f[i])){
		stack[k] = std::stod(ps_f[i]);
		k++;
	    }else{
	        if (k<2){
	            std::cout << "Not enough operands";
                    delete[] stack;
                    return 0;
	        }
	        char op = ps_f[i][0];
		switch(op){
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
		        if (stack[k-1] == 0){
		            std::cout << "Division by 0";
		            delete[] stack;
		            delete[] ps_f;
		            return 0;
		        }
		        stack[k-2] = stack[k-2]/stack[k-1];
		        k--;
		        break;
		    default:
		        std::cout << "Wrong operator";
		        delete[] stack;
		        delete[] ps_f;
		        return 0;
		}
	    }
	    
	}
	std::cout << "Result: "<< stack[0]<<std::endl;
	delete[] stack;
	delete[] ps_f;
	return 0;
}
