
#include"ClassGun.h"

//конструктор
Gun::Gun(Type type)
	: _type(type), _stats(get_stats_for_type(type)) {}
	
void Gun::get_stats() const {
	 std::cout << "Type: " << _stats.name 
                  << ", Damage: " << _stats.damage 
                  << ", Range: " << _stats.range 
                  << ", Fire Rate: " << _stats.fire_rate 
                  << std::endl;
};

Gun::Stats Gun::get_stats_for_type(Type type) {
	 switch (type) {
            case Type::Fists: 
                return { "Fists",15, 1, 1 }; // Урон, дальность, скорострельность
            case Type::Pistol: 
                return { "Pistol",10, 50, 1 };
            case Type::Rifle: 
                return { "Rifle",30, 100, 2 };
            case Type::Shotgun: 
                return { "Shotgun",50, 30, 1 };
            case Type::No_gun: 
            default:
                return { "No_gun",0, 0, 0 };
        }

};

	

