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
	person p("�","��Ϊmate30");
	printf("%s����%s\n", p.m_name, p.m_pname);
}