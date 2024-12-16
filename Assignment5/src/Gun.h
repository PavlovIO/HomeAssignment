/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#ifndef GUN_H
#define GUN_H

#include "headers.h"

class Gun
{
public:
    //различные виды оружия
    enum class Type { No_gun, Fists, Pistol, Rifle, Shotgun, Claw };

    //структура с для параметров оружия
    struct Stats
    {
        std::string name;
        uint damage;
        uint range;
        uint fire_rate;//в секунду
    };

    //конструктор
    Gun(Type type = Type::Fists);

    //методы
    Stats get_stats() const;
    
    friend std::ostream& operator<<(std::ostream& os, Gun& gun);
    
private:

    Gun::Stats get_stats_for_type(Type type);

    //поля
    Type _type;
    Stats _stats;


};

#endif
