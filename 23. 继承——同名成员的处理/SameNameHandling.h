#pragma once
#include <iostream>
using namespace std;

class Base {
public:
	int m_A=100;
	void func() {
		cout << "Base_func()�ĵ���" << endl;
	}
	void func(int a) {
		cout << "Base_func(int a)�ĵ���" << endl;
	}
};

class Son :public Base {
public:
	int m_A=200;
	void func() {
		cout << "Son_func()�ĵ���" << endl;
	}
};
