#pragma once
#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger myinteger);
	//friend MyInteger& operator++(MyInteger& myint);
private:
	int m_num;
public:
	MyInteger() {
		m_num = 100;
	}
	//������ǰ��++�����
	MyInteger& operator++() {
		m_num++;
		return *this;
	}

	//�����غ���++�����
	MyInteger operator++(int) {   //tmp�Ǿֲ��������������÷�ʽ���أ���˺���++������ʽ��̣�
		MyInteger* tmp = this;
		m_num++;
		return *tmp;
	}
};