/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "ClassDirection.h"

Direction::Direction(Type type) : _type(type) {}

std::string Direction::get_direction() const
{
    switch (_type)
    {
    case Type::North:
        return "North";
    case Type::East:
        return "East";
    case Type::South:
        return "South";
    case Type::West:
        return "West";
    default:
        return "Unknown";
    }
}

void Direction::turn_right()
{
    switch (_type)
    {
    case Type::North:
        _type = Type::East;
        break;
    case Type::East:
        _type = Type::South;
        break;
    case Type::South:
        _type = Type::West;
        break;
    case Type::West:
        _type = Type::North;
        break;
    }
}

void Direction::turn_around()
{
    turn_right();
    turn_right();
}

void Direction::turn_left()
{
    turn_around();
    turn_right();
}
