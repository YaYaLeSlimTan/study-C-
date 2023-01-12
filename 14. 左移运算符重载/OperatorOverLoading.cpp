#include "OperatorOverLoading.h"

void Person::operator<<(ostream& cout) {
	cout << this->m_A << endl;
	cout << this->m_B << endl;
}