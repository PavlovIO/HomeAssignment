/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon: public Transformer
{
public:
    Decepticon( std::string form) ;

    bool Transform();

    std::string get_form();
    void set_form(const std::string form);
    bool get_is_transformed();
    int get_anger();
    void set_anger(int courage);

private:
    std::string _form;
    bool _is_transformed = false;
    int _anger = 10;
};

#endif
