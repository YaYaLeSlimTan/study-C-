#include "OperatorOverLoading.h"

Person::Person(int a,int b) {
	m_A = a;
	m_B = b;
}

void Person::operator<<(ostream& cout) {
	cout << this->m_A << endl;
	cout << this->m_B << endl;
}