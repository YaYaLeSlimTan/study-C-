#include <iostream>
#include "GloabalFunc.h"
using namespace std;

void GoodGay(Building* building) {
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

int main() {
	Building b;
	GoodGay(&b);
}