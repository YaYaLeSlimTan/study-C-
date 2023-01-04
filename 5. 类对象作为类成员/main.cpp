#include <stdio.h>


class phone {
public:
	phone(const char* pname):m_pname(pname)
	{
	}
	const char* m_pname;
};

class person {
public:
	person(const char* name,phone pname):m_name(name),m_pname(pname)
	{
	}
	const char* m_name;
	phone m_pname;
};

int main() {
	person p("李华","华为mate30");
	printf("%s拿着%s\n", p.m_name, p.m_pname);
}