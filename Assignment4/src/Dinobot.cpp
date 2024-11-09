/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "Dinobot.h"

Dinobot::Dinobot(Gun *gun , std::string form, int x_pos, int y_pos)
    : Transformer(gun, new Ultimate(Ultimate::Type::No_ultimate), x_pos, y_pos), _form(form), _is_hunting(false) {}

Dinobot::Dinobot(int x_pos, int y_pos)
    : Transformer(new Gun(Gun::Type::Claw), new Ultimate(Ultimate::Type::No_ultimate), x_pos, y_pos), _form("Tiranasaurus") {}

bool Dinobot::growl()
{
    return true;
};

bool Dinobot::start_hunt()
{
    _is_hunting = true;
    return true;
};

std::string Dinobot::get_form()
{
    return _form;
};

bool Dinobot::get_is_hunting()
{
    return _is_hunting;
};

void Dinobot::set_is_hunting(bool is_hunting)
{
    _is_hunting = is_hunting;
};


