#include <stdio.h>
#include <stdlib.h>

class person {
public:
	int m_Age=0;
	//int* m_Height = (int*)malloc(sizeof(int));
	int* m_Height = new int();
public:
	person() {
		printf("Ĭ�Ϲ��캯���ĵ���\n");
	}
	person(int age,int height) {
		m_Age = age;
		*m_Height = height;
		printf("�вι��캯���ĵ���\n");
	}
	person(const person& p) {
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//������Ĭ�ϵĿ���������������ָ��ָ��ͬһ��ѿռ�
		*m_Height = *p.m_Height;

	}
	~person() {
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		printf("���������ĵ���\n");
	}
};

void test01() {
	person p1(10,183);
	person p2(p1);


	printf("p1������Ϊ��%d, p1�����Ϊ��%d\n", p1.m_Age,*p1.m_Height);
	printf("p2������Ϊ��%d, p2�����Ϊ��%d\n", p2.m_Age,*p2.m_Height);
}

int main() {
	test01();
}