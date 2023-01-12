#pragma once
#include <iostream>
using namespace std;

class Person {
public:
	int m_A;
	int m_B;
	void operator<<(ostream& p);
};