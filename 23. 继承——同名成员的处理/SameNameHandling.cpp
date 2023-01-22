#include <iostream>
#include "SameNameHandling.h"
using namespace std;

void test01() {
	Son s;
	s.Base::func(100);	
}

int main() {
	test01();
	return 0;
}