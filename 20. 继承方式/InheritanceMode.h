#pragma once


class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son_1:public Base {
public:
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;//������˽��Ȩ�������޷�����
	}
};

class Son_2 :protected Base {
public:
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;//������˽��Ȩ�������޷�����
	}
};

class Son_3 :private Base {
public:
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;//������˽��Ȩ�������޷�����
	}
};