
#include"ClassGun.h"

//конструктор
Gun::Gun(Type type = Type::Fists)
	: _type(type) {}
	
void Gun::get_stats(Type type) const {
	 std::cout << "Type: " << static_cast<int>(_type) 
                  << ", Damage: " << _stats.damage 
                  << ", Range: " << _stats.range 
                  << ", Fire Rate: " << _stats.fireRate 
                  << std::endl;
};

Stats Gun::get_stats_for_type(Type type) {
	 switch (type) {
            case Type::Fists: 
                return { 15, 1, 1 }; // Урон, дальность, скорострельность
            case Type::Pistol: 
                return { 10, 50, 1 };
            case Type::Rifle: 
                return { 30, 100, 2 };
            case Type::Shotgun: 
                return { 50, 30, 1 };
            case Type::No_gun: 
            default:
                return { 0, 0, 0 };
        }

};

	

