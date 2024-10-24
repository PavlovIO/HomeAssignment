#include "ClassTransformer.h"

int main() {
    Gun *gun = new Gun(Gun::Type::Rifle);
    Ultimate *ulti = new Ultimate(Ultimate::Type::Shield);
    
    Transformer Optimus(gun, ulti, 1, 0);
    
    Optimus.move();
    Optimus.jump();  // Убедитесь, что это внутри функции main

    Direction dir(Direction::South);
    Optimus.turn(dir);
    Optimus.fire();
    
    Optimus.ultimate();
    
    std::cout << "Current fuel: " << Optimus.get_fuel() << std::endl;
    Optimus.set_fuel(150);
    std::cout << "New fuel: " << Optimus.get_fuel() << std::endl;

    Optimus.get_gun();
    
    Gun *gun2 = new Gun(Gun::Type::Shotgun);
    Optimus.set_gun(gun2); // Передаем указатель
    	
    Optimus.get_gun();
    
    return 0;
}

