#include <iostream>
#include "RelationalOperatorOverLoading.h"
using namespace std;

void test01() {
	Person p1(14, "��Բ��");
	Person p2(22, "��Բ�еİְ�");
	printf("%d\n", p1 == p2);
}

int main() {
	test01();
	return 0;
}