#include <stdio.h>
#include <iostream>
using namespace std;

class phone {
public:
	phone(const char* pname):m_pname(pname)
	{
		cout << "phone�๹�캯���ĵ���" << endl;
	}
	~phone() {
		cout << "phone�����������ĵ���" << endl;
	}
	const char* m_pname;
};

class person {
public:
	person(const char* name,phone pname):m_name(name),m_phone(pname)
	{
		cout << "person�๹�캯���ĵ���" << endl;
	}
	~person() {
		cout << "person�����������ĵ���" << endl;
	}
	const char* m_name;
	phone m_phone;
};

int main() {
	person p("�","��Ϊmate30");
	//printf("%s����%s\n", p.m_name, p.m_phone.m_pname);
	cout << p.m_name << "���ţ� " << p.m_phone.m_pname << endl;
}