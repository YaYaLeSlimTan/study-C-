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
		age = c.age;//����������Ŀ��������������һ�䣬
		//��������Լ�д���캯�����ӵĻ���û��ʵ�ֿ��������ԭ������ĳ�Ա������ͬ
		printf("���������ĵ���\n");
	}
	person::~person() {
		printf("���������ĵ���\n");
	}