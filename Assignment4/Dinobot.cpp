/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "Dinobot.h"

Dinobot::Dinobot(Gun *gun = new Gun(Gun::Type::Claw), std::string form = "Tiranasaurus")
    : Transformer(gun), _form(form), _is_hunting(false) {}

Dinobot::Dinobot(std::string form = "Tiranasaurus")
    : Dinobot(new Gun(Gun::Type::Claw), form) {}

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


