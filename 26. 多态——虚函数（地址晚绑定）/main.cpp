#include <iostream>
#include "VirtualFunction.h"
using namespace std;

void DoSpeak(Animal &a) {
	a.speak();
}

void test01() {
	Cat cat;
	DoSpeak(cat);

	Dog dog;
	DoSpeak(dog);
}

int main() {
	test01();
	return 0;
}