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
		age = c.age;//编译器构造的拷贝函数会加上这一句，
		//但是如果自己写构造函数不加的话就没法实现拷贝的类和原来的类的成员属性相同
		printf("拷贝函数的调用\n");
	}
	person::~person() {
		printf("析构函数的调用\n");
	}