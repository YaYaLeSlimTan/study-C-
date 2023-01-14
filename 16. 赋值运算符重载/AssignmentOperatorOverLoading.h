#pragma once
#include <iostream>

class Person {
public:
	int* m_Age;
public:
	Person(int age) {
		m_Age = new int(age);
	}
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	void operator=(Person& p) {
		if (this->m_Age != NULL) {
			delete this->m_Age;
			this->m_Age = NULL;
		}
		////Ç³¿½±´
		//this->m_Age = p.m_Age;
		
		//Éî¿½±´
		this->m_Age = new int(*p.m_Age);
	}
};