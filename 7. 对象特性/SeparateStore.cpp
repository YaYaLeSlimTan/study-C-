#include "SeparateStore.h"
#include <iostream>
using namespace std;

int person::m_Height = 183;

void person::func1() {
	cout << m_Height << endl;
	cout << "非静态成员函数的调用" << endl;
}

void person::func2() {
	cout << m_Height << endl;
	cout << "静态成员函数的调用" << endl;
}