/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "ClassAutobot.h"

Autobot::Autobot(std::string form = "Car")
    :_form(form) {}

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

