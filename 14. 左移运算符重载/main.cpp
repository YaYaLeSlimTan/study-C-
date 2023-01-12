#include <iostream>
#include "OperatorOverLoading.h"
using namespace std;


void operator<<(ostream& cout, Person& p) {
	cout << p.m_A << endl;
	cout << p.m_B << endl;
}

void test01() {
	Person p1;
	p1.m_A = 100;
	p1.m_B = 200;

	//②成员函数版：
	
	//原版
	p1.operator<<(cout);
	//简化版
	p1 << cout;


	//②全局函数版：
	
	//原版
	operator<<(cout, p1);
	//简化版
	cout << p1 ;
}

int main() {
	test01();
}