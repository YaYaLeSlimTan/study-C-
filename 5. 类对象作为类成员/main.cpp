#include <stdio.h>
#include <iostream>
using namespace std;

class phone {
public:
	phone(const char* pname):m_pname(pname)
	{
		cout << "phone类构造函数的调用" << endl;
	}
	~phone() {
		cout << "phone类析构函数的调用" << endl;
	}
	const char* m_pname;
};

class person {
public:
	person(const char* name,phone pname):m_name(name),m_phone(pname)
	{
		cout << "person类构造函数的调用" << endl;
	}
	~person() {
		cout << "person类析构函数的调用" << endl;
	}
	const char* m_name;
	phone m_phone;
};

int main() {
	person p("李华","华为mate30");
	//printf("%s拿着%s\n", p.m_name, p.m_phone.m_pname);
	cout << p.m_name << "拿着： " << p.m_phone.m_pname << endl;
}