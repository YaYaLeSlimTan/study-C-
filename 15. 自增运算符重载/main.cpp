#include <iostream>
#include "IncrementOperatorOverLoading.h"
using namespace std;

//ȫ�ֺ�������<<�����
ostream& operator<<(ostream& out, MyInteger myinteger) {
	out << myinteger.m_num << endl;
	return out;
}

////ȫ�ֺ�������ǰ++�����
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