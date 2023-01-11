#include "Class.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

Building::Building() {
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

Building::~Building() {

}

GoodGay::GoodGay() {
	//building = (Building*)malloc(sizeof(Building));//只会申请空间
	building = new Building;//①申请空间；②调用构造函数；
	visit();
}

GoodGay::~GoodGay() {

}

void GoodGay::visit() {
	cout << "好基友类正在访问: " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问: " << building->m_BedRoom << endl;
}