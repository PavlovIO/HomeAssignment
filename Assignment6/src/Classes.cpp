/* Ilya Pavlov st129535@student.spbu.ru
	assignment6
*/
#include "Classes.h"
bool Class1::bar(int num, std::vector<double>& vec)
{
    if(num > 0)
    {
        return true;
    }
    return false;
}

bool Class2::bar(int num, std::vector<double>& vec)
{
    if(!vec.empty())
    {
        return true;
    }
    return false;
}

bool Class3::bar(int num, std::vector<double>& vec)
{
    if(num == static_cast<int>(vec.size())*(-1))
    {
        return true;
    }
    return false;
}
//Class1
int Class1::c_1_1()
{
    return 1;
};
float Class1::c_1_2()
{
    return 1.41f;
};
void Class1::c_1_3()
{
    std::cout<<"Class1`s method activated"<<std::endl;
};
//Class2
int Class2::c_2_1()
{
    return 2;
};
float Class2::c_2_2()
{
    return 2.71f;
};
void Class2::c_2_3()
{
    std::cout<<"Class2`s method activated"<<std::endl;
};
//Class3
int Class3::c_3_1()
{
    return 3;
};
float Class3::c_3_2()
{
    return 3.14f;
};
void Class3::c_3_3()
{
    std::cout<<"Class3`s method activated"<<std::endl;
};
