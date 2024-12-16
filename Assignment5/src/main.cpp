/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#include "Transformer.h"
int main(){
    Transformer bot = Transformer(10, 10);
    std::cout<<bot<<std::endl;
    std::ofstream os("log.txt");
    os<<bot<<std::endl;
    os.close();
    return 0;
};
