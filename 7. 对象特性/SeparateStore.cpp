#include "SeparateStore.h"
#include <iostream>
using namespace std;

int person::m_Height = 183;

void person::func1() {
	cout << m_Height << endl;
	cout << "�Ǿ�̬��Ա�����ĵ���" << endl;
}

void person::func2() {
	cout << m_Height << endl;
	cout << "��̬��Ա�����ĵ���" << endl;
}