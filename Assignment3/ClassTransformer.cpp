

#include "ClassTransformer.h"

//Конструктор
Transformer::Transformer(Gun *gun, int x_pos, int y_pos)
	: _gun(*gun), _x_pos(x_pos), _y_pos(y_pos) {}
	
//Реализация методов

//перемещение на одну клетку в том направлении куда смотрит
bool Transformer::move(Direction dir, int x_pos, int y_pos) {
	std::cout<<"Moving"<<std::endl;
	//будет добавлена логика проверки в каком направлении идти и можно ли пройти
	_x_pos = x_pos;
	_y_pos = y_pos;
	return true;
};

//поворот 
bool Transformer::turn(Direction dir) {
	std::cout<<"Turning"<<std::endl;
	_dir = dir;
	return true;
};

//перемещение на несколько клеток в том направлении куда смотрит
bool Transformer::jump(Direction dir, int x_pos, int y_pos) {
	std::cout<<"Jumping"<<std::endl;
	//будет добавлена логика проверки в каком направлении прыгать и можно ли сделать прыжок
	_x_pos = x_pos;
	_y_pos = y_pos;
	return true;
};

//выстрел в направлении куда смотрит, проверка на наличие патронов
bool Transformer::fire(Direction dir, int x_pos, int y_pos, uint ammo) {
	std::cout<<"FIIIRIING!!"<<std::endl;
	//будет добавлена логика проверки наличия патронов и их изменения при стрельбе
	return true;
};

//использование ултимативной способности
bool Transformer::ultimate(Ultimate ultimate) { 
	std::cout<<"Brace for impact. Activating ULTIMATE!!!"<<std::endl;
	//будет добавлена реализация использования ультимативной способности
	return true;
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

Ultimate Transformer::get_ultimate() {
	return _ultimate;
};
//Реализация методов сеттеров

void Transformer::set_level(uint level) {
	_level = level;
};

void Transformer::set_strength(uint strength) {
	_strength = strength;
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
	_gun = *gun;
};

void Transformer::set_x_pos(int x_pos) {
	_x_pos = x_pos;
};

void Transformer::set_y_pos(int y_pos) {
	_y_pos = y_pos;
};

void Transformer::set_ultimate(Ultimate ultimate) {
	_ultimate = ultimate;
};







