#include <iostream>
#include "static.h"
using namespace std;

//① 静态成员变量
void test01() {
	cout << person::m_Age << endl;
}

void test02() {
	/*person p1;
	p1.fun1();*/

	person::func1();
	//person::func2();
}

int main() {
	test01();
	test02();
}