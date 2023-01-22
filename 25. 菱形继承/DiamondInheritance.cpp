#include <iostream>
#include "DiamondInheritance.h"
using namespace std;

void test01() {
	SheetTuo st;
	st.Sheet::m_Age = 10;
	st.Tuo::m_Age = 20;
	//st.m_Age = 10;
}

int main() {
	test01();
	return 0;
}