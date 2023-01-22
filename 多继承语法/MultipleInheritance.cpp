#include <iostream>
#include "MultipleInheritance.h"
using namespace std;

void test01() {
	Son s;
	int ret = sizeof(s);
	cout << s.Base2::m_A << endl;
}

int main() {
	test01();
	return 0;
}