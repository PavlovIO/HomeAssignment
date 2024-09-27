/* Ilya Pavlov st129535@student.spbu.ru
	first test programm
*/

#include <iostream>
#include <string>
#include "hello.h"


int main()
{

	std::string name = "world";
	while(true)
	{
		sh::SayHello(name);
		std::cin>>name;
		if (name  == "stop")
		{
			break;
		}
		
	}
}

