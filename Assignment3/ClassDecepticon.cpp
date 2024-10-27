/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "ClassDecepticon.h"

Decepticon::Decepticon(std::string form = "Tank")
    : _form(form) {}

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

