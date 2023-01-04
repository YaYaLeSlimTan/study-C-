#include "GouZaoSetTime.h"
#include <stdio.h>

	/*person::person() {
		printf("默认构造函数的调用\n");
	}*/
	person::person(int age) {
		m_Age = age;
		printf("有参构造函数的调用\n");
	}
	person::person(const person& p) {
		m_Age = p.m_Age;
		printf("拷贝构造函数的调用\n");
	}
	person::~person() {
		printf("析构函数的调用\n");
	}