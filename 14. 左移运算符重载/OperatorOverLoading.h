#pragma once
#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
private:
	int m_A;
	int m_B;
public:
	Person(int a,int b);
	void operator<<(ostream& p);
};