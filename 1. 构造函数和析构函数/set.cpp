#include <stdio.h>
#include "set.h"

	person::person() {
		printf("�޲ι��캯���ĵ���\n");
	}
	person::person(int a) {
		age = a;
		printf("�вι��캯���ĵ���\n");
	}
	person::person(const person& c) {
		age = c.age;
		printf("���������ĵ���\n");
	}
	person::~person() {
		printf("���������ĵ���\n");
	}