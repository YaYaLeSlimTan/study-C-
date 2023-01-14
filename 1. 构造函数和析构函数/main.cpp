#include <stdio.h>
#include "set.h"


void test01() {
	//1.括号法
	/*person p1;
	person p2(10);
	person p3(p2);*/

	//2.显示法
	/*person p1 = person();
	person p2 = person(10);
	person p3 = person(p2);*/

	//3.隐式转化法
	person p1;
	person p2 = 10;
	person p3 = p2;

	//person(10);//匿名对象函数的调用
	//person(p2);//不要用拷贝函数初始化一个匿名对象，person p2;
	printf("---------------------------------\n");

	printf("p2的年龄为：%d\n", p2.age);
	printf("p3的年龄为：%d\n", p3.age);
}

int main() {
	test01();

	return 0;
}