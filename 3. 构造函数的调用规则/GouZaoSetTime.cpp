#include "GouZaoSetTime.h"
#include <stdio.h>

	/*person::person() {
		printf("Ĭ�Ϲ��캯���ĵ���\n");
	}*/
	person::person(int age) {
		m_Age = age;
		printf("�вι��캯���ĵ���\n");
	}
	person::person(const person& p) {
		m_Age = p.m_Age;
		printf("�������캯���ĵ���\n");
	}
	person::~person() {
		printf("���������ĵ���\n");
	}