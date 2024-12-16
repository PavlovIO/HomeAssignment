


#include "Template.h"
//Genral functions
template <typename T>
Temp<T>::Temp(T input, int n, std::vector<double> v)
    :obj(input), num(n), vec(v) {}

template <typename T>
bool Temp<T>::foo()
{
    return this->obj.bar(num, vec);
};

//Specialization for int
template <>
bool Temp<int>::foo()
{
    return true;
};

//Specialization for double
template <>
bool Temp<double>::foo()
{
    return false;
};

