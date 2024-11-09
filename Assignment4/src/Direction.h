/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef DIRECTION_H
#define DIRECTION_H
#include "headers.h"

class Direction
{
public:

    enum class Type
    {
        North,
        East,
        South,
        West,
    };
    Direction(Type type);
    void turn_left();
    void turn_right();
    void turn_around();

    std::string get_direction() const;
    
    friend std::ostream& operator<<(std::ostream& os, Direction& dir);
    
private:
    Type _type;
};
#endif
