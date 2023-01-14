#include <iostream>
#include "IncrementOperatorOverLoading.h"
using namespace std;

//全局函数重载<<运算符
ostream& operator<<(ostream& out, MyInteger myinteger) {
	out << myinteger.m_num << endl;
	return out;
}

////全局函数重载前++运算符
//MyInteger& operator++(MyInteger& myint) {
//	myint.m_num++;
//	return myint;
//}

void test01() {
	MyInteger myinteger;
	cout << ++myinteger << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
}

int main() {
	test01();
	test02();
}