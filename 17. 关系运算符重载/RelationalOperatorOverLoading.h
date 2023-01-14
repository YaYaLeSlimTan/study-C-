#pragma once

class Person {
private:
	int m_Age;
	const char* m_Name;
public:
	Person(int age,const char* name);
	bool operator==(Person& p);
	bool operator!=(Person& p);
};
