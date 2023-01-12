#pragma once

class Person {
public:
	int m_A, m_B;
public:
	//1. 通过成员函数重载
	Person operator+(Person& p);
	Person operator+(int a);
};