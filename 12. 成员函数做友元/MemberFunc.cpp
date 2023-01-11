#include "MemberFunc.h"
#include <iostream>
using namespace std;

Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit1() {
	cout << "visit1函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit1函数正在访问：" << building->m_BedRoom << endl;
}