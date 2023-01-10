#include <iostream>
using namespace std;
#include "SeparateStore.h"
#include "thisPointer.h"

void test01() {
	person1 p1(10);
	person1 p2(10);
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << "p2µÄÄêÁäÎª" << p2.age << endl;
}

int main() {
	//person p;
	//p.func2();
	//cout << "size of p: " << sizeof(p) << endl;

	test01();
}