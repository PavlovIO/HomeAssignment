
#ifndef CLASSGUN_H
#define CLASSGUN_H

#include <iostream>
#include <string>

class Gun{
public:
	//различные виды оружия
	enum class Type { No_gun, Fists, Pistol, Rifle, Shotgun };
	
	//структура с для параметров оружия
	struct Stats {
		std::string name;
		uint damage;
		uint range;
		uint fire_rate;//в секунду
	};
	
	//конструктор
	Gun(Type type = Type::Fists);
	
	//методы
	void get_stats() const;
	
private:
		
	Gun::Stats get_stats_for_type(Type type);

	//поля
	Type _type;
	Stats _stats;
	
	
};

#endif
