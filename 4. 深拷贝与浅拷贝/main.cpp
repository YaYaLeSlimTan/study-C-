#include <stdio.h>
#include <stdlib.h>

class person {
public:
	int m_Age=0;
	//int* m_Height = (int*)malloc(sizeof(int));
	int* m_Height = new int();
public:
	person() {
		printf("默认构造函数的调用\n");
	}
	person(int age,int height) {
		m_Age = age;
		*m_Height = height;
		printf("有参构造函数的调用\n");
	}
	person(const person& p) {
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认的拷贝操作，让两个指针指向同一块堆空间
		*m_Height = *p.m_Height;

	}
	~person() {
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		printf("析构函数的调用\n");
	}
};

void test01() {
	person p1(10,183);
	person p2(p1);


	printf("p1的年龄为：%d, p1的身高为：%d\n", p1.m_Age,*p1.m_Height);
	printf("p2的年龄为：%d, p2的身高为：%d\n", p2.m_Age,*p2.m_Height);
}

int main() {
	test01();
}