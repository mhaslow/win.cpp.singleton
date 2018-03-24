#pragma once

#include <iostream>

class Singleton {

public:
	static Singleton* getInstance();

private:
	// private constructor and destructor
	Singleton();
	~Singleton();

	// private copy constructor and assignment operator
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);

	static Singleton *m_instanceSingleton;
};