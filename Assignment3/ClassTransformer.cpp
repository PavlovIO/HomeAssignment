
#include <iostream>
#include "ClassTransformer.h"

//Конструктор
Transformer::Transformer(Gun *gun, int x_pos, int y_pos)
	: _gun(*gun), _x_pos(x_pos), _y_pos(y_pos) {}
	
//Реализация методов

//перемещение на одну клетку в том направлении куда смотрит
bool Transformer::move(Direction dir, int x_pos, int y_pos) {
	std::cout<<"Moving"<<std::endl;
	_x_pos = x_pos;
	_y_pos = y_pos;
	return 0;
};

//поворот 
bool Transformer::turn(Direction dir) {
	std::cout<<"Turning"<<std::endl;
	_dir = dir;
	return 0;
};

//перемещение на несколько клеток в том направлении куда смотрит
bool Transformer::jump(Direction dir, int x_pos, int y_pos) {
	std::cout<<"Jumping"<<std::endl;
	_x_pos = x_pos;
	_y_pos = y_pos;
	return 0;
};

//выстрел в направлении куда смотрит, проверка на наличие патронов
bool Transformer::fire(Direction dir, int x_pos, int y_pos, uint ammo) {
	std::cout<<"FIIIRIING!!"<<std::endl;
	return 0;
};

//использование ултимативной способности
bool Transform::ultimate() { 
	std::cout<<"Brace for impact. Activating ULTIMATE!!!"<<std::endl;
	return 0;
};

//Реализация методов геттеров

uint Transformer::get_level() {
	return _level;
};

uint Transformer::get_strength() {
	return _strength;
};

uint Transformer::get_health() {
	return _health;
};

uint Transformer::get_fuel() {
	return _fuel;
};

uint Transformer::get_ammo() {
	return _ammo;
};

Direction Transformer::get_dir() {
	return _dir;
};

Gun Transformer::get_gun() {
	return _gun;
};

int Transformer::get_x_pos() {
	return _x_pos;
};

int Transformer::get_y_pos() {
	return _y_pos;
};

//Реализация методов сеттеров

void Transformer::set_level(uint level) {
	_level = level;
};

void Transformer::set_strength(uint strength) {
	_strength = strenght;
};

void Transformer::set_health(uint health) {
	_health = health;
};

void Transformer::set_fuel(uint fuel) {
	_fuel = fuel;
};

void Transformer::set_ammo(uint ammo) {
	_ammo = ammo;
};

void Transformer::set_gun(Gun *gun) {
	_gun = *gun
};

void Transformer::set_x_pos(int x_pos) {
	_x_pos = x_pos;
};

void Transformer::set_y_pos(int y_pos) {
	_y_pos = y_pos;
};








