#include <stdio.h>
#include "SetTime.h"

//��ʹ��һ��������ϵĶ�������ʼ��һ���¶���
void test01() {
	person p1;
	person p2(p1);
}

//��ֵ���ݵķ�ʽ������������ֵ
void test02(person p) {
	return;
}

//��ֵ��ʽ���ؾֲ�����
person test03() {
	person p1;
	printf("%x\n", &p1);
	return p1;
}

int main() {
	//test01();

	/*person p1;
	test02(p1);*/

	person p1;
	p1 = test03();
	printf("%x\n", &p1);
	return 0;
}