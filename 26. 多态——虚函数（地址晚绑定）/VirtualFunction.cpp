#include "VirtualFunction.h"
#include <iostream>
using namespace std;

	void Animal::speak() {
		cout << "动物在说话" << endl;
	}

	void Dog::speak() {
		cout << "狗在说话" << endl;
	}

	void Cat::speak() {
		cout << "猫在说话" << endl;
	}
