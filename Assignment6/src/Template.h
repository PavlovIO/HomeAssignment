/* Ilya Pavlov st129535@student.spbu.ru
	assignment6
*/
#ifndef TEMPLATE_H
#define TEMPLATE_H
#include "headers.h"
#include "Classes.h"

template <typename T>
class Temp
{
public:
    Temp(T input, int n, std::vector<double> v);
    
    bool foo();

private:
    T obj;
    int num;
    std::vector<double> vec;
};

//Specalization for int and double
template class Temp<int>;
template class Temp<double>;
template class Temp<Class1>;
template class Temp<Class2>;
template class Temp<Class3>;
#endif







