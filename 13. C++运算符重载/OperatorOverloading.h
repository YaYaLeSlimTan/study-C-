#pragma once

class Person {
public:
	int m_A, m_B;
public:
	//1. ͨ����Ա��������
	Person operator+(Person& p);
	Person operator+(int a);
};