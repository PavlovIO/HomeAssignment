
#ifndef CLASSGUN_H
#define CLASSGUN_H

#include <iostream>

class Gun{
public:
	//различные виды оружия
	enum class Type { No_Gun, Fists, Pistol, Rifle, Shotgun };
	
	//структура с для параметров оружия
	struct Stats {
		uint _damage;
		uint _range;
		uint _fire_rate;//в секунду
	};
	
	//конструктор
	Gun(Type type = Type::Fists);
	
	//методы
	void get_stats() const;
	
private:
		
	Stats get_stats_for_type(Type type);

	//поля
	Type _type;
	Stats _stats;
	
	
};

#endif
