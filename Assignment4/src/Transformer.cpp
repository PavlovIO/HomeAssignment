/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/

#include "Transformer.h"

//Конструктор
Transformer::Transformer(Gun* gun,Ultimate* ultimate, int x_pos, int y_pos)
    : _gun(gun), _ultimate(ultimate), _x_pos(x_pos), _y_pos(y_pos) {}

Transformer::Transformer(Ultimate* ultimate, int x_pos, int y_pos)
    : _gun(new Gun(Gun::Type::Pistol)), _ultimate(ultimate), _x_pos(x_pos), _y_pos(y_pos) {}

Transformer::Transformer(Gun* gun, int x_pos, int y_pos)
    : _gun(gun), _ultimate(new Ultimate(Ultimate::Type::Shield)), _x_pos(x_pos), _y_pos(y_pos) {}

Transformer::Transformer(int x_pos, int y_pos)
    : _gun(new Gun(Gun::Type::Pistol)), _ultimate(new Ultimate(Ultimate::Type::Shield)), _x_pos(x_pos), _y_pos(y_pos) {}    

//деструктор
Transformer::~Transformer()
{
    delete _gun;
    delete _ultimate;
}
//конструктор копии
Transformer::Transformer(const Transformer& other)
    :
    //копирование значений из ссылок
    _gun(other._gun ? new Gun(*other._gun) : nullptr),
    _ultimate(other._ultimate ? new Ultimate(*other._ultimate) : nullptr),
    _x_pos(other._x_pos),
    _y_pos(other._y_pos),
    _level(other._level),
    _strength(other._strength),
    _health(other._health),
    _fuel(other._fuel),
    _ammo(other._ammo),
    _dir(other._dir)
{}

//Реализация методов

//перемещение на одну клетку в том направлении куда смотрит
bool Transformer::move()
{
    std::cout<<"Moving"<<std::endl;
    
    _x_pos = _x_pos;
    _y_pos = _y_pos;
    return true;
};

//поворот
bool Transformer::turn(std::string dir)
{
    if (dir == "right")
    {
        _dir.turn_right();
    }
    else if (dir == "left")
    {
        _dir.turn_left();
    }
    else if (dir == "around")
    {
        _dir.turn_around();
    }
    else
    {
        std::cout << "Unknown direction" << std::endl;
        return false;
    }
    return true;
}

//перемещение на несколько клеток в том направлении куда смотрит
bool Transformer::jump()
{
    std::cout<<"Jumping"<<std::endl;
    //будет добавлена логика проверки в каком направлении прыгать и можно ли сделать прыжок
    _x_pos = _x_pos;
    _y_pos = _y_pos;
    return true;
};

//выстрел в направлении куда смотрит, проверка на наличие патронов
bool Transformer::fire()
{
    std::cout<<"FIIIRIING!!"<<std::endl;
    //будет добавлена логика проверки наличия патронов и их изменения при стрельбе
    return true;
};

//использование ултимативной способности
bool Transformer::ultimate()
{
    std::cout<<"Brace for impact. Activating ULTIMATE!!!"<<std::endl;
    //будет добавлена реализация использования ультимативной способности
    _ultimate->use();
    return true;
};

//Реализация методов геттеров

uint Transformer::get_level()
{
    return _level;
};

uint Transformer::get_strength()
{
    return _strength;
};

uint Transformer::get_health()
{
    return _health;
};

uint Transformer::get_fuel()
{
    return _fuel;
};

uint Transformer::get_ammo()
{
    return _ammo;
};

std::string Transformer::get_dir()
{
    return _dir.get_direction();

};

void Transformer::get_gun()
{
    _gun->get_stats();
};

int Transformer::get_x_pos()
{
    return _x_pos;
};

int Transformer::get_y_pos()
{
    return _y_pos;
};
void Transformer::get_ultimate()
{
    _ultimate -> ultimate_type();
};
//Реализация методов сеттеров

void Transformer::set_level(uint level)
{
    _level = level;
};

void Transformer::set_strength(uint strength)
{
    _strength = strength;
};

void Transformer::set_health(uint health)
{
    _health = health;
};

void Transformer::set_fuel(uint fuel)
{
    _fuel = fuel;
};

void Transformer::set_ammo(uint ammo)
{
    _ammo = ammo;
};

void Transformer::set_gun(Gun *gun)
{
    delete _gun;
    _gun = gun;
};

void Transformer::set_x_pos(int x_pos)
{
    _x_pos = x_pos;
};

void Transformer::set_y_pos(int y_pos)
{
    _y_pos = y_pos;
};

void Transformer::set_ultimate(Ultimate *ultimate)
{
    delete _ultimate;
    _ultimate = ultimate;
};







