#include "MemberFunc.h"
#include <iostream>
using namespace std;

Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit1() {
	cout << "visit1�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit1�������ڷ��ʣ�" << building->m_BedRoom << endl;
}