/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#ifndef DINOBOT_H
#define DINOBOT_H

#include "Transformer.h"

class Dinobot: public Transformer
{
public:
    Dinobot(Gun *gun, std::string form) ;
    Dinobot(std::string form);

    bool growl();
    bool start_hunt();

    std::string get_form();
    bool get_is_hunting();

    void set_is_hunting(bool is_hunting);

private:
    std::string _form;
    bool _is_hunting = false;
};

#endif
