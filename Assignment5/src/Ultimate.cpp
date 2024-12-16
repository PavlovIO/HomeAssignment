/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#include "AllClassesHeader.h"
//Конструктор
Ultimate::Ultimate(Type type)
    : _type(type), _is_used(false), _stats(get_stats_for_type(type)) {}

void Ultimate::use()
{
    //будет добавлена реализация кулдауна
    _is_used = true;
};

Ultimate::Stats Ultimate::get_stats_for_type(Type type)
{
    switch(type)
    {
    case Type::Heal:
        return {"Heal"};
    case Type::Buff:
        return {"Buff"};
    case Type::Shield:
        return {"Shield"};
    default:
        return {"No_ultimate"};
    };

};
bool Ultimate::get_is_used() const
{
    return _is_used;
};

std::string Ultimate::ultimate_type()
{

    return _stats.name;

};
