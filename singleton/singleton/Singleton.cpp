#include "Singleton.h"

Singleton* Singleton::m_instanceSingleton = nullptr;


Singleton::Singleton()
{
	std::cout << "Singleton::ctor()" << std::endl;
}

Singleton::~Singleton()
{
	std::cout << "Singleton::dtor()" << std::endl;
}

Singleton*
Singleton::getInstance()
{
	return (!m_instanceSingleton) ? m_instanceSingleton = new Singleton : m_instanceSingleton;
}


SingletonRef::SingletonRef()
{

}

SingletonRef::~SingletonRef()
{

}

SingletonRef &
SingletonRef::getInstance()
{
	static SingletonRef sref;
	return sref;
}