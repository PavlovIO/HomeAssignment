/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "Decepticon.h"

Decepticon::Decepticon(Gun* gun, Ultimate* ultimate, std::string form, int x_pos, int y_pos)
    : Transformer(gun, ultimate, x_pos, y_pos), _form(form) {}

Decepticon::Decepticon(int x_pos, int y_pos)
    : Transformer(new Gun(Gun::Type::Shotgun), new Ultimate(Ultimate::Type::Buff), x_pos, y_pos), _form("Tank") {}

bool Decepticon::Transform()
{
    _is_transformed = not(_is_transformed);
    return true;
};

std::string Decepticon::get_form()
{
    return _form;
};

int Decepticon::get_anger()
{
    return _anger;
};

void Decepticon::set_anger(int anger)
{
    _anger = anger;
};

void Decepticon::set_form(const std::string form)
{
    _form = form;
};

bool Decepticon::get_is_transformed()
{
    return _is_transformed;
};

