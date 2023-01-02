#include "SetTime.h"
#include <stdio.h>

	person:: person() {
		printf("无参构造函数的调用\n");
	}
	person::person(int a) {
		printf("有参构造函数的调用\n");
	}
	person::person(const person& p) {
		printf("拷贝构造函数的调用\n");
	}
	person::~person() {
		printf("析构函数的调用\n");
	}