#include <iostream>
#include "MemberFunc.h"
using namespace std;

void test01() {
	GoodGay gg;
	gg.visit1();

	gg.building->m_SittingRoom = "hhhhh";
	gg.visit1();
}

int main() {
	test01();
}