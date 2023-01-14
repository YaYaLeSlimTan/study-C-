#include <iostream>
#include "AssignmentOperatorOverLoading.h"
using namespace std;

void test01() {
	Person p1(10);
	Person p2(20);
	p2 = p1;
	cout << *p1.m_Age << "  " << *p2.m_Age << endl;
}

int main() {
	test01();
	return 0;
}