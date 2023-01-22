#include <iostream>
#include "functor.h"
using namespace std;

ostream& operator<<(ostream& cout, MyPrint& myprint) {
	cout << myprint.m_Text << endl;
	return cout;
}

void test01() {
	MyPrint myprint;
	myprint("ÌÀÔ²×ÐÂÔÂÔÂÔ");
	cout << myprint << endl;
}

void test02() {
	MyAdd myadd;
	//int ret = MyAdd()(10, 20);
	int ret = myadd.operator()(10, 20);
	cout << ret << endl;
}

int main() {
	//system("color 1f");
	test01();
	test02();
	return 0;
}