#pragma once
#include "thisPointer.h"
#include <stdio.h>

person1::person1(int age)
{
	this->age = age;	//解决名称冲突
	printf("年龄为%d\n",age);
}

person1& person1::personAddAge(person1 p) {
	this->age += p.age;
	return *this;
}