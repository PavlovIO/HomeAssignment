
#ifndef CLASSTRANSFORMER_H
#define CLASSTRANSFORMER_H

#include "ClassDirection.h"
#include "ClassGun.h"
#include "ClassUltimate.h"
#include <iostream>


class Transformer{
public:
	//конструктор
	Transformer(Gun *gun,Ultimate *ultimate, int x_pos, int y_pos);
	
	//деструктор
	~Transformer();
	
	//конструктор копии
	Transformer(const Transformer& other);
	
	//методы
	bool move(Direction dir, int x_pos, int y_pos);
	bool turn(Direction dir);//работает как сеттер для направления
	bool jump(Direction dir, int x_pos, int y_pos);
	bool fire(Direction dir, int x_pos, int y_pos, uint ammo);
	bool ultimate(Ultimate *ultimate);
	
	//геттеры
	uint get_level();
	uint get_strength();
	uint get_health();
	uint get_fuel();
	uint get_ammo();
	Direction get_dir();
	Gun get_gun();
	int get_x_pos();
	int get_y_pos();
	Ultimate get_ultimate();
	
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
	
private:

	//поля
	uint _level = 1;
	uint _strength = 5;
	uint _health = 20;
	uint _fuel = 100;
	uint _ammo = 0;
	Direction _dir = Direction::North;
	int _x_pos = 0;
	int _y_pos = 0;
	Gun *_gun;
	Ultimate *_ultimate;
	
};

#endif
