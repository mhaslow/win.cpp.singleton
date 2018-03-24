#include <iostream>
#include <stdint.h>

// Class includes
#include "Singleton.h"

int main()
{
	Singleton *s = Singleton::getInstance();
	Singleton *r = Singleton::getInstance();

	std::cout << s << std::endl;
	std::cout << r << std::endl;
	

	system("pause");
	return 0;
}