#pragma once
#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger myinteger);
	//friend MyInteger& operator++(MyInteger& myint);
private:
	int m_num;
public:
	MyInteger() {
		m_num = 100;
	}
	//①重载前置++运算符
	MyInteger& operator++() {
		m_num++;
		return *this;
	}

	//②重载后置++运算符
	MyInteger operator++(int) {   //tmp是局部变量不能用引用方式返回，因此后置++不能链式编程；
		MyInteger* tmp = this;
		m_num++;
		return *tmp;
	}
};