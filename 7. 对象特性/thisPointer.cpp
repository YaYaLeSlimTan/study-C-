#pragma once
#include "thisPointer.h"
#include <stdio.h>

person1::person1(int age)
{
	this->age = age;	//������Ƴ�ͻ
	printf("����Ϊ%d\n",age);
}

person1& person1::personAddAge(person1 p) {
	this->age += p.age;
	return *this;
}