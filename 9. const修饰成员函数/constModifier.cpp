#include "constModifier.h"

void Person::ShowPerson()const {//const修饰的是this指向的值，使得this指针指向的值是个常量: const person* const this
	//this->m_A = 100;
	this->m_B = 100;
	//this=nullptr;				//this指针的本质是一个指针常量，指向的值不可修改: person* const this
}