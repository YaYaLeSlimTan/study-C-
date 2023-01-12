#include <iostream>
#include "OperatorOverloading.h"
using namespace std;

//2.通过全局函数重载
Person operator^(Person& p1, Person& p2) {
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

void test01() {
	Person p1, p2, p3;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 20;
	p2.m_B = 20;
	p3 = p1.operator+(p2);		//成员函数
	//p3 = operator^(p1,p2);	//全局函数
	Person p4 = p3.operator+(6);
}

int main() {
	test01();
}