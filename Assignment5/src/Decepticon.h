/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon: public Transformer
{
public:
    Decepticon(Gun* _gun, Ultimate* ultimate, std::string form, int x_pos = 10, int y_pos = 10);
    
    Decepticon(int x_pos = 10, int y_pos = 10);

    bool Transform();

    std::string get_form();
    void set_form(const std::string form);
    bool get_is_transformed();
    void set_special_power(int _special_power);

private:
    std::string _form;
    bool _is_transformed = false;
    int _special_power = 10;
};

#endif
