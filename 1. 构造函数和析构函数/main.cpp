#include <stdio.h>
#include "set.h"


void test01() {
	//1.���ŷ�
	/*person p1;
	person p2(10);
	person p3(p2);*/

	//2.��ʾ��
	/*person p1 = person();
	person p2 = person(10);
	person p3 = person(p2);*/

	//3.��ʽת����
	person p1;
	person p2 = 10;
	person p3 = p2;

	//person(10);//�����������ĵ���
	//person(p2);//��Ҫ�ÿ���������ʼ��һ����������person p2;
	printf("---------------------------------\n");

	printf("p2������Ϊ��%d\n", p2.age);
	printf("p3������Ϊ��%d\n", p3.age);
}

int main() {
	test01();

	return 0;
}