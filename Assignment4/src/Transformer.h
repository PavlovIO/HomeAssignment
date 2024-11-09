/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Direction.h"
#include "Gun.h"
#include "Ultimate.h"




class Transformer
{
public:
    //конструктор
    Transformer(Gun* _gun, Ultimate* ultimate, int x_pos = 0, int y_pos = 0);
    
    Transformer(Ultimate* ultimate, int x_pos = 0, int y_pos = 0);
    
    Transformer(Gun* _gun, int x_pos = 0, int y_pos = 0);
    
    Transformer(int x_pos = 0, int y_pos = 0);

    //деструктор
    ~Transformer();

    //конструктор копии
    Transformer(const Transformer& other);

    //методы
    bool move();
    bool turn(std::string dir);
    bool jump();
    bool fire();
    bool ultimate();

    //геттеры
    uint get_level();
    uint get_strength();
    uint get_health();
    uint get_fuel();
    uint get_ammo();
    std::string get_dir();
    void get_gun();
    int get_x_pos();
    int get_y_pos();
    void get_ultimate();


    // сеттеры
    void set_level(uint level);
    void set_strength(uint strength);
    void set_health(uint health);
    void set_fuel(uint fuel);
    void set_ammo(uint ammo);
    void set_gun(Gun *gun);
    void set_x_pos(int x_pos);
    void set_y_pos(int y_pos);
    void set_ultimate(Ultimate *ultimate);

    //перегрузки методов
    friend std::ostream& operator<<(std::ostream& os, Transformer& transformer);

private:
    //поля
    Gun* _gun;
    Ultimate* _ultimate;
    int _x_pos ;
    int _y_pos;
    uint _level = 1;
    uint _strength = 5;
    uint _health = 20;
    uint _fuel = 100;
    uint _ammo = 0;
    Direction _dir = Direction::Type::North;
};

#endif
