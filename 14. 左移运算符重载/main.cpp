#include <iostream>
#include "OperatorOverLoading.h"
using namespace std;


void operator<<(ostream& cout, Person& p) {
	cout << p.m_A << endl;
	cout << p.m_B << endl;
}

void test01() {
	Person p1;
	p1.m_A = 100;
	p1.m_B = 200;

	//�ڳ�Ա�����棺
	
	//ԭ��
	p1.operator<<(cout);
	//�򻯰�
	p1 << cout;


	//��ȫ�ֺ����棺
	
	//ԭ��
	operator<<(cout, p1);
	//�򻯰�
	cout << p1 ;
}

int main() {
	test01();
}