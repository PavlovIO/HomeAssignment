/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef ULTIMATE_H
#define ULTIMATE_H
#include "headers.h"


class Ultimate
{
public:
    //различные виды
    enum class Type { Heal, Buff, Shield,No_ultimate};

    struct Stats
    {
        std::string name;
    };

    //конструктор
    Ultimate(Type type = Type::Heal);

    //методы
    void use();
    std::string ultimate_type();
    bool get_is_used() const;
    
    friend std::ostream& operator<<(std::ostream& os, Ultimate& ult);
    
private:
    Ultimate::Stats get_stats_for_type(Type type);

    //поля
    Type _type;
    bool _is_used;
    Stats _stats;



};

#endif
