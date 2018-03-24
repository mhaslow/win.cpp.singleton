#include <iostream>
#include <stdint.h>

// Class includes
#include "Singleton.h"

int main()
{
	Singleton *s = Singleton::getInstance();
	Singleton *r = Singleton::getInstance();

	std::cout << "Singleton with ptr" << std::endl;
	std::cout << s << std::endl;
	std::cout << r << std::endl;
	
	SingletonRef &sref = SingletonRef::getInstance();
	SingletonRef &rref = SingletonRef::getInstance();

	std::cout << std::endl << "Singleton with ref" << std::endl;
	std::cout << &sref << std::endl;
	std::cout << &rref << std::endl;


	system("pause");
	return 0;
}