#pragma once
#include <iostream>
using namespace std;

class MyPrint {
	friend ostream& operator<<(ostream& cout, MyPrint& myprint);
private:
	const char* m_Text;
public:
	void operator()(const char* text) {
		this->m_Text = text;
	}
};

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};