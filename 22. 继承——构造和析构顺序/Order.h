#pragma once
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base构造函数的调用" << endl;
	}
	~Base() {
		cout << "Base析构函数的调用" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son构造函数的调用" << endl;
	}
	~Son() {
		cout << "Son析构函数的调用" << endl;
	}
};