#pragma once


class person {
private:
	int m_Age;
public:
	/*person();*/
	person(int age);
	person(const person& p);
	~person();
};