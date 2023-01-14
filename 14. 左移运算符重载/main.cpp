#include <iostream>
#include "OperatorOverLoading.h"
using namespace std;


ostream& operator<<(ostream& cout, Person& p) {
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	return cout;
}

void test01() {
	Person p1(6,6);
	////①成员函数版：
	////原版
	//p1.operator<<(cout);
	////简化版
	//p1 << cout;

	////②全局函数版：
	////原版
	//operator<<(cout, p1);
	////简化版
	//cout << p1 << endl;
}

int main() {
	test01();
}