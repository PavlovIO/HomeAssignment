/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "Autobot.h"

Autobot::Autobot(Gun* gun, Ultimate* ultimate, std::string form,  int x_pos, int y_pos)
    : Transformer(gun, ultimate, x_pos, y_pos), _form(form) {}

Autobot::Autobot(int x_pos, int y_pos)
    : Transformer(new Gun(Gun::Type::Rifle), new Ultimate(Ultimate::Type::Buff), x_pos, y_pos), _form("Car") {}

bool Autobot::Transform()
{
    _is_transformed = not(_is_transformed);
    return true;
};

std::string Autobot::get_form()
{
    return _form;
};

int Autobot::get_courage()
{
    return _courage;
};

void Autobot::set_courage(int courage)
{
    _courage = courage;
};

void Autobot::set_form(const std::string form)
{
    _form = form;
};

bool Autobot::get_is_transformed()
{
    return _is_transformed;
};

