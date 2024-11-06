/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer
{
public:
    Autobot(std::string form) ;

    bool Transform();

    std::string get_form();
    int get_courage();
    bool get_is_transformed();

    void set_form(const std::string form);
    void set_courage(int courage);

private:
    std::string _form;
    bool _is_transformed = false;
    int _courage = 10;
};

#endif
