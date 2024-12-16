/* Ilya Pavlov st129535@student.spbu.ru
	assignment5
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer
{
public:
    Autobot(Gun* _gun, Ultimate* ultimate, std::string form,  int x_pos = -10, int y_pos = -10);
    
    Autobot(int x_pos = -10, int y_pos = -10);

    bool Transform();

    std::string get_form();
    bool get_is_transformed();

    void set_form(const std::string form);
    void set_special_power(int special_power);

private:
    int update_power();

    std::string _form;
    bool _is_transformed = false;
    int _special_power = 10;
};

#endif
