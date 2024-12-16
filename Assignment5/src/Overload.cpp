/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#include "Transformer.h"

std::ostream& operator<<(std::ostream& os, Ultimate& ult) {
    std::string ult_name = ult.ultimate_type();
    std::string ult_is_used = ult.get_is_used() ? "ult is not ready" : "ult is ready";
    os << "Ultimate type: "<< ult_name
       << ", Ultimate state: "<<ult_is_used;
    return os;
};

std::ostream& operator<<(std::ostream& os, Gun& gun) {
    os << "Type: " << gun._stats.name
       << ", Damage: " << gun._stats.damage
       << ", Range: " << gun._stats.range
       << ", Fire Rate: " << gun._stats.fire_rate;
    return os;
};

std::ostream& operator<<(std::ostream& os, Direction& dir) {
    os << dir.get_direction();
    return os;
};

std::ostream& operator<<(std::ostream& os, Transformer& transformer) {
    os << "Level: " << transformer._level << std::endl
       << "Strength: " << transformer._strength << std::endl
       << "Health: " << transformer._health << std::endl
       << "Fuel: " << transformer._fuel << std::endl
       << "Ammo: " << transformer._ammo << std::endl
       << "Position: " << "("<< transformer._x_pos <<" ,"<<transformer._y_pos<<" )" << std::endl
       << "Gun: "<< *transformer._gun << std::endl
       << "Ultimate: "<< *transformer._ultimate << std::endl
       << "Direction: " << transformer._dir << std::endl;
       return os;
};

bool operator<(const Transformer& other)
{
    return this->_power < other._power;
};
bool operator==(const Transformer& other)
{
    return this->_power == other._power;
};
bool operator>(const Transformer& other)
{
    return not( other < *this );
};
bool operator<=(const Transformer& other)
{
    return !(other < *this);
};
bool operator>=(const Transformer& other)
{
    return !(*this < other);
};





















