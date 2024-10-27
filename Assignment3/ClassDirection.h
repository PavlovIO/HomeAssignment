/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef CLASSDIRECTION_H
#define CLASSDIRECTION_H
#include <string>

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
private:
    Type _type;
};
#endif
