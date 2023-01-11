#include <iostream>
#include "constModifier.h"
using namespace std;

void test01() {
	Person p1;
	p1.ShowPerson();
}

void test02() {
	const Person p2;
	//p2.m_A = 100;
	p2.m_B = 100;
}

int main() {
	//test01();
	test02();
}