#pragma once
//成员变量和成员函数是分开存储的

class person {
public:
	int m_Age;				//非静态成员变量	属于类的对象

	static int m_Height;	//静态成员变量	不属于类的对象
	void func1();			//非静态成员函数	不属于类的对象
	static void func2();	//静态成员函数	不属于类的对象
};