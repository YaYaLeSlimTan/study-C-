#pragma once
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base���캯���ĵ���" << endl;
	}
	~Base() {
		cout << "Base���������ĵ���" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son���캯���ĵ���" << endl;
	}
	~Son() {
		cout << "Son���������ĵ���" << endl;
	}
};