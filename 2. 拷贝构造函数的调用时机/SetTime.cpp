#include "SetTime.h"
#include <stdio.h>

	person:: person() {
		printf("�޲ι��캯���ĵ���\n");
	}
	person::person(int a) {
		printf("�вι��캯���ĵ���\n");
	}
	person::person(const person& p) {
		printf("�������캯���ĵ���\n");
	}
	person::~person() {
		printf("���������ĵ���\n");
	}