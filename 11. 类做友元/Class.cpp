#include "Class.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

Building::Building() {
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

Building::~Building() {

}

GoodGay::GoodGay() {
	//building = (Building*)malloc(sizeof(Building));//ֻ������ռ�
	building = new Building;//������ռ䣻�ڵ��ù��캯����
	visit();
}

GoodGay::~GoodGay() {

}

void GoodGay::visit() {
	cout << "�û��������ڷ���: " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ���: " << building->m_BedRoom << endl;
}