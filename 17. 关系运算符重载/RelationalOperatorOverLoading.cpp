#include "RelationalOperatorOverLoading.h"

Person::Person(int age, const char* name) {
	(*this).m_Age = age;
	this->m_Name = name;
}
bool Person::operator==(Person& p) {
	if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) {
		return true;
	}
	return false;
}
bool Person::operator!=(Person& p) {
	if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) {
		return false;
	}
	return true;
}