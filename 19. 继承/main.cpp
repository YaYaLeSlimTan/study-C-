#include <iostream>
#include "Inherit.h"
using namespace std;

int main() {
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "---------------------------" << endl;

	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();
	cout << "---------------------------" << endl;

	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------------------------" << endl;
	return 0;
}