#include "OperatorOverloading.h"


Person Person::operator+(Person& p) {
	Person tmp;
	tmp.m_A = this->m_A + p.m_A;
	tmp.m_B = this->m_B + p.m_B;
	return tmp;
}

Person Person::operator+(int a) {
	Person tmp;
	tmp.m_A = this->m_A + a;
	tmp.m_B = this->m_B + a;
	return tmp;
}