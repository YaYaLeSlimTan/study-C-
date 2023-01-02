#include <stdio.h>
#include "SetTime.h"

//①使用一个创建完毕的对象来初始化一个新对象
void test01() {
	person p1;
	person p2(p1);
}

//②值传递的方式给函数参数传值
void test02(person p) {
	return;
}

//③值方式返回局部对象
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