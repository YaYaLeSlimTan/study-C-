#include <stdio.h>
#include "set.h"

	person::person() {
		printf("无参构造函数的调用\n");
	}
	person::person(int a) {
		age = a;
		printf("有参构造函数的调用\n");
	}
	person::person(const person& c) {
		age = c.age;
		printf("拷贝函数的调用\n");
	}
	person::~person() {
		printf("析构函数的调用\n");
	}