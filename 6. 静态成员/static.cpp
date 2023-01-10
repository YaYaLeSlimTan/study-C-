#include "static.h"
#include <iostream>
using namespace std;

int person::m_Age = 100;
int person::m_Age2 = 200;//类外也可以初始化私有类成员变量
//int person::Age = 100;

void person::func1() {
	cout << "静态成员函数的调用" << endl;
}

void person::func2() {
	cout << "私有类静态成员函数的调用" << endl;
}