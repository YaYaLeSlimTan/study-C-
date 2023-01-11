#include <iostream>
#include "GloabalFunc.h"
using namespace std;

void GoodGay(Building* building) {
	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}

int main() {
	Building b;
	GoodGay(&b);
}