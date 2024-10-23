
#include "ClassUltimate.h"
//Конструктор
Ultimate::Ultimate(Type type)
	: _type(type), _is_used(false) {}

void Ultimate::use(){
	//будет добавлена реализация кулдауна
	_is_used = true;
};
