#include <iostream>
#include "OperatorOverLoading.h"
using namespace std;


ostream& operator<<(ostream& cout, Person& p) {
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	return cout;
}

void test01() {
	Person p1(6,6);
	////�ٳ�Ա�����棺
	////ԭ��
	//p1.operator<<(cout);
	////�򻯰�
	//p1 << cout;

	////��ȫ�ֺ����棺
	////ԭ��
	//operator<<(cout, p1);
	////�򻯰�
	//cout << p1 << endl;
}

int main() {
	test01();
}