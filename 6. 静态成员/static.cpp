#include "static.h"
#include <iostream>
using namespace std;

int person::m_Age = 100;
int person::m_Age2 = 200;//����Ҳ���Գ�ʼ��˽�����Ա����
//int person::Age = 100;

void person::func1() {
	cout << "��̬��Ա�����ĵ���" << endl;
}

void person::func2() {
	cout << "˽���ྲ̬��Ա�����ĵ���" << endl;
}